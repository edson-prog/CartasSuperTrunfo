#include <stdio.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    char estado[3];
    char codigo[4];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para capturar os dados de uma carta
void cadastrarCarta(Carta *c) {
    printf("\nEstado (Sigla - 2 letras): ");
    scanf(" %2s", c->estado);
    printf("Código: ");
    scanf("%s", c->codigo);
    printf("Cidade: ");
    scanf(" %[^\n]s", c->cidade);
    printf("População: ");
    scanf("%lu", &c->populacao);
    printf("Área (km²): ");
    scanf("%f", &c->area);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &c->pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c->pontos);

    // Cálculo da Densidade Populacional
    c->densidade_populacional = c->populacao / c->area;

    // Cálculo do PIB per Capita
    c->pib_per_capita = (c->pib * 1000000000) / c->populacao;  // PIB convertido para reais

    // Cálculo do Super Poder
    c->super_poder = c->populacao + c->area + c->pib * 1000000000 + c->pontos + c->pib_per_capita + (1 / c->densidade_populacional);
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta c) {
    printf("\n📜 Carta:\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.cidade);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", c.pib_per_capita);
    printf("Super Poder: %.2f\n", c.super_poder);
}

// Função para comparar as cartas e exibir os vencedores
void compararCartas(Carta c1, Carta c2) {
    printf("\n🔹 Comparação de Cartas 🔹\n");
    printf("População: Carta %d venceu (%d)\n", (c1.populacao > c2.populacao) ? 1 : 2, (c1.populacao > c2.populacao));
    printf("Área: Carta %d venceu (%d)\n", (c1.area > c2.area) ? 1 : 2, (c1.area > c2.area));
    printf("PIB: Carta %d venceu (%d)\n", (c1.pib > c2.pib) ? 1 : 2, (c1.pib > c2.pib));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (c1.pontos > c2.pontos) ? 1 : 2, (c1.pontos > c2.pontos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (c1.densidade_populacional < c2.densidade_populacional) ? 1 : 2, (c1.densidade_populacional < c2.densidade_populacional)); // Menor densidade vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (c1.pib_per_capita > c2.pib_per_capita) ? 1 : 2, (c1.pib_per_capita > c2.pib_per_capita));
    printf("Super Poder: Carta %d venceu (%d)\n", (c1.super_poder > c2.super_poder) ? 1 : 2, (c1.super_poder > c2.super_poder));
}

int main() {
    Carta carta1, carta2;

    // Cadastro das cartas
    printf("\n🔹 Cadastrando Carta 1:");
    cadastrarCarta(&carta1);
    printf("\n🔹 Cadastrando Carta 2:");
    cadastrarCarta(&carta2);

    // Exibição das cartas com cálculos
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Comparação entre as cartas
    compararCartas(carta1, carta2);

    return 0;
}
