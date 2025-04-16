#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta:
    char estado[3], carta[4], cidade[30];
    unsigned long int populacao;
    int turismo;
    float area, pib, densidade_populacional, pib_per_capita;

    // Entrada para a primeira carta
    printf("Insira as siglas do estado (2 letras): ");
    scanf("%2s", estado);

    printf("Insira o número da carta (formato A01, A02, etc): ");
    scanf("%3s", carta);

    printf("Insira a cidade: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%lu", &populacao);

    printf("Insira a área da cidade: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos de turismo: ");
    scanf("%d", &turismo);

    // Cálculos da primeira carta
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("As siglas do estado são: %s\n", estado);
    printf("O número da carta é: %s\n", carta);
    printf("A cidade é: %s\n", cidade);
    printf("A população é de aproximadamente: %lu\n", populacao);
    printf("A área da cidade é de: %.1f km²\n", area);
    printf("O PIB da cidade é de: %.1f\n", pib);
    printf("A quantidade de pontos turísticos é: %d\n", turismo);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.1f\n", pib_per_capita);

    printf("\n");

    // Declaração de variáveis para a segunda carta:
    char estado1[3], carta1[4], cidade1[30];
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    // Entrada para a segunda carta
    printf("Insira as siglas do estado (2 letras): ");
    scanf("%2s", estado1);

    printf("Insira o número da carta (formato A01, A02, etc): ");
    scanf("%3s", carta1);

    printf("Insira a cidade: ");
    scanf("%s", cidade1);

    printf("Insira a população: ");
    scanf("%lu", &populacao1);

    printf("Insira a área da cidade: ");
    scanf("%f", &area1);

    printf("Insira o PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turismo1);

    // Cálculos da segunda carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("As siglas do estado são: %s\n", estado1);
    printf("O número da carta é: %s\n", carta1);
    printf("A cidade é: %s\n", cidade1);
    printf("A população é de aproximadamente: %lu\n", populacao1);
    printf("A área da cidade é de: %.1f km²\n", area1);
    printf("O PIB da cidade é de: %.1f\n", pib1);
    printf("A quantidade de pontos turísticos é: %d\n", turismo1);
    printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.1f\n", pib_per_capita1);
    printf("\n");

    // Comparação das cartas com base no atributo População
    printf("--- Comparação de Atributos (População) ---\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %lu\n", cidade1, estado1, populacao1);

    if (populacao > populacao1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (populacao < populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
    
}