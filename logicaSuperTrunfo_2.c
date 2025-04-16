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

    int escolha;

    printf("=== Menu Interativo ===\n");
    printf("Escolha de Atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Demográfica/Populacional\n");
    printf("Escolha o primeiro Atributo: ");
    scanf("%d", &escolha);

    printf("Você escolheu a opção: %d\n", escolha);

    switch (escolha)
    {
    case 1:
        printf("--- Comparação de Atributos: População ---\n");
        printf("Carta 1 - %s (%s): %lu\n", cidade, estado, populacao);
        printf("Carta 2 - %s (%s): %lu\n", cidade1, estado1, populacao1);

        if (populacao > populacao1) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (populacao < populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

        case 2: // Área
        printf("--- Comparação de Atributos: Área ---\n");
        printf("Carta 1 - %s (%s): %.1f km²\n", cidade, estado, area);
        printf("Carta 2 - %s (%s): %.1f km²\n", cidade1, estado1, area1);

        if (area > area1) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (area < area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3: // PIB
        printf("--- Comparação de Atributos: PIB ---\n");
        printf("Carta 1 - %s (%s): %.1f\n", cidade, estado, pib);
        printf("Carta 2 - %s (%s): %.1f\n", cidade1, estado1, pib1);

        if (pib > pib1) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (pib < pib1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        printf("--- Comparação de Atributos: Pontos Turísticos ---\n");
        printf("Carta 1 - %s (%s): %d\n", cidade, estado, turismo);
        printf("Carta 2 - %s (%s): %d\n", cidade1, estado1, turismo1);

        if (turismo > turismo1) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (turismo < turismo1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5: // Densidade Demográfica
        printf("--- Comparação de Atributos: Densidade Demográfica ---\n");
        printf("Carta 1 - %s (%s): %.1f hab/km²\n", cidade, estado, densidade_populacional);
        printf("Carta 2 - %s (%s): %.1f hab/km²\n", cidade1, estado1, densidade_populacional1);

        if (densidade_populacional < densidade_populacional1) { // Menor valor vence!
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        } else if (densidade_populacional > densidade_populacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
        break;
    }

    return 0;

}