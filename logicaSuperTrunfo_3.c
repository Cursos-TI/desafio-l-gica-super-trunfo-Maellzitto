#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta:
    char estado[3], carta[4], cidade[30];
    unsigned long int populacao;
    int turismo;
    float area, pib, densidade_populacional;

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
    // pib_per_capita = pib / populacao; foi comentado / (removido) por não ser utilizado no código.

    // Entrada para a segunda carta
    char estado1[3], carta1[4], cidade1[30];
    unsigned long int populacao1;
    int turismo1;
    float area1, pib1, densidade_populacional1;

    printf("\nInsira as siglas do estado (2 letras): ");
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
    // pib_per_capita1 = pib1 / populacao1; foi comentado / (removido) por não ser utilizado no código.

    // Menu de seleção de atributos
    int escolha1, escolha2;

    printf("\n=== Menu Interativo ===\n");
    printf("Escolha de Atributos:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Demográfica/Populacional\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    // Validação da escolha 1 usando switch
    switch (escolha1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Você escolheu o primeiro atributo: %d\n", escolha1);
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            return 1;
    }

    printf("\nEscolha o segundo atributo (exceto o primeiro escolhido):\n");
    if (escolha1 != 1) printf("1. População\n");
    if (escolha1 != 2) printf("2. Área\n");
    if (escolha1 != 3) printf("3. PIB\n");
    if (escolha1 != 4) printf("4. Pontos turísticos\n");
    if (escolha1 != 5) printf("5. Densidade Demográfica/Populacional\n");
    scanf("%d", &escolha2);

    /*
       Acima foi utilizado != para verificar se a escolha 2 é diferente da escolha 1.
       (!=) verifica se dois valores são diferentes.
    */

    // Validação da escolha 2 usando switch
    switch (escolha2) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            if (escolha2 == escolha1) {
                printf("Opção inválida! O segundo atributo deve ser diferente do primeiro.\n");
                return 1;
            }
            printf("Você escolheu o segundo atributo: %d\n", escolha2);
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            return 1;
    }

    // Comparação dos atributos

    /*
     Observação: A escolha número 5 é um caso especial, pois a comparação é feita de forma inversa. 
     A ecolha número 5 foi separada da 1, 2, 3 e 4 para que a comparação seja feita de forma diferente das demais atributos e 
     melhor entendimento do código.
     O (+=) foi adicionado para somar os pontos de cada carta.
    */

    int pontos_carta1 = 0, pontos_carta2 = 0;

    // Comparação do primeiro atributo
    float valor_carta1, valor_carta2;

    valor_carta1 = (escolha1 == 1) ? populacao :
                   (escolha1 == 2) ? area :
                   (escolha1 == 3) ? pib :
                   (escolha1 == 4) ? turismo : densidade_populacional;

    valor_carta2 = (escolha1 == 1) ? populacao1 :
                   (escolha1 == 2) ? area1 :
                   (escolha1 == 3) ? pib1 :
                   (escolha1 == 4) ? turismo1 : densidade_populacional1;

    printf("\n--- Comparação: Primeiro Atributo ---\n");
    printf("Atributo 1: Carta 1 - %.1f | Carta 2 - %.1f\n", valor_carta1, valor_carta2);

    if (escolha1 == 5) {
        pontos_carta1 += (valor_carta1 < valor_carta2) ? 1 : 0;
        pontos_carta2 += (valor_carta2 < valor_carta1) ? 1 : 0;
    } else {
        pontos_carta1 += (valor_carta1 > valor_carta2) ? 1 : 0;
        pontos_carta2 += (valor_carta2 > valor_carta1) ? 1 : 0;
    }

    // Comparação do segundo atributo
    valor_carta1 = (escolha2 == 1) ? populacao :
                   (escolha2 == 2) ? area :
                   (escolha2 == 3) ? pib :
                   (escolha2 == 4) ? turismo : densidade_populacional;

    valor_carta2 = (escolha2 == 1) ? populacao1 :
                   (escolha2 == 2) ? area1 :
                   (escolha2 == 3) ? pib1 :
                   (escolha2 == 4) ? turismo1 : densidade_populacional1;

    printf("\n--- Comparação: Segundo Atributo ---\n");
    printf("Atributo 2: Carta 1 - %.1f | Carta 2 - %.1f\n", valor_carta1, valor_carta2); 

    if (escolha2 == 5) {
        pontos_carta1 += (valor_carta1 < valor_carta2) ? 1 : 0; // Menor valor vence!
        pontos_carta2 += (valor_carta2 < valor_carta1) ? 1 : 0; 
    } else {
        pontos_carta1 += (valor_carta1 > valor_carta2) ? 1 : 0; // Maior valor vence!
        pontos_carta2 += (valor_carta2 > valor_carta1) ? 1 : 0;
    }

    // Exibição do Resultado Final
    printf("\n--- Resultado Final ---\n");
    printf("Pontos da Carta 1: %d\n", pontos_carta1);
    printf("Pontos da Carta 2: %d\n", pontos_carta2);

    if (pontos_carta1 > pontos_carta2) {
        printf("Carta 1 venceu a rodada!\n");
    } else if (pontos_carta1 < pontos_carta2) {
        printf("Carta 2 venceu a rodada!\n");
    } else {
        printf("Empate!\n");
    }

    /*
     O código acima foi modificado para que a comparação dos atributos seja feita de forma mais dinâmica e interativa.
     O código foi dividido em partes para melhor entendimento e organização.
    */

    return 0;
}
