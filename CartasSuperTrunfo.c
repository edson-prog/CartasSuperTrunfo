#include <stdio.h>

int main() {
    // Dados das cartas
    char estado, codigo[4], cidade[50];
    int populacao, pontos;
    float area, pib;

    // Primeira carta
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Codigo: ");
    scanf("%s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]s", cidade);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);

    // Segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Codigo: ");
    scanf("%s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]s", cidade);
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);

    return 0;
}
