#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char nome[100];
    long int populacao;
    float area;
    double pib_total;
    float densidade_populacional;
    double pib_per_capita;
} Cidade;

// Função para calcular as propriedades derivadas
void calcular_propriedades(Cidade *cidade) {
    cidade->densidade_populacional = cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib_total / cidade->populacao;
}

// Função para exibir os dados de uma cidade
void exibir_cidade(Cidade cidade) {
    printf("\n-----------------------------\n");
    printf("Cidade: %s\n", cidade.nome);
    printf("População: %ld habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB Total: %.2lf\n", cidade.pib_total);
    printf("Densidade Populacional: %.2f habitantes/km²\n", cidade.densidade_populacional);
    printf("PIB per capita: %.2lf\n", cidade.pib_per_capita);
    printf("-----------------------------\n");
}

int main() {
    int n;
    
    // Solicita o número de cidades ao usuário
    printf("Quantas cidades deseja cadastrar? ");
    scanf("%d", &n);
    
    // Declara um array de estruturas para armazenar os dados das cidades
    Cidade cidades[n];

    // Entrada dos dados das cidades
    for (int i = 0; i < n; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);
        
        printf("Nome da cidade: ");
        scanf(" %[^\n]", cidades[i].nome);  // Lê string com espaços
        
        printf("População: ");
        scanf("%ld", &cidades[i].populacao);
        
        printf("Área (km²): ");
        scanf("%f", &cidades[i].area);
        
        printf("PIB Total: ");
        scanf("%lf", &cidades[i].pib_total);
        
        // Calcula as propriedades derivadas
        calcular_propriedades(&cidades[i]);
    }

    // Exibe os dados das cidades
    printf("\n--- Informações das Cidades ---\n");
    for (int i = 0; i < n; i++) {
        exibir_cidade(cidades[i]);
    }

    return 0;
}
