#include <stdio.h>

int main() {
    // ==============================
    // CARTA 1 - SÃO PAULO (EXEMPLO)
    // ==============================
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 530000000000.0;
    int pontos_turisticos1 = 15;

    // Cálculos automáticos
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // ===============================
    // CARTA 2 - RIO DE JANEIRO (EXEMPLO)
    // ===============================
    char estado2[] = "RJ";
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 400000000000.0;
    int pontos_turisticos2 = 12;

    // Cálculos automáticos
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    int opcao;

    do {
        printf("\n==============================\n");
        printf("   SUPER TRUNFO - COMPARAÇÃO  \n");
        printf("==============================\n");
        printf("1 - Comparar População\n");
        printf("2 - Comparar Área\n");
        printf("3 - Comparar PIB\n");
        printf("4 - Comparar Densidade Populacional\n");
        printf("5 - Comparar PIB per Capita\n");
        printf("6 - Finalizar Análise\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        printf("\n-------------------------------------\n");

        switch(opcao) {
            case 1:
                printf("Comparação (Atributo: População)\n\n");
                printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
                printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
                if (populacao1 > populacao2)
                    printf("\nResultado: %s venceu!\n", cidade1);
                else if (populacao2 > populacao1)
                    printf("\nResultado: %s venceu!\n", cidade2);
                else
                    printf("\nResultado: Empate!\n");
                break;

            case 2:
                printf("Comparação (Atributo: Área)\n\n");
                printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
                printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
                if (area1 > area2)
                    printf("\nResultado: %s venceu!\n", cidade1);
                else if (area2 > area1)
                    printf("\nResultado: %s venceu!\n", cidade2);
                else
                    printf("\nResultado: Empate!\n");
                break;

            case 3:
                printf("Comparação (Atributo: PIB)\n\n");
                printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib1);
                printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib2);
                if (pib1 > pib2)
                    printf("\nResultado: %s venceu!\n", cidade1);
                else if (pib2 > pib1)
                    printf("\nResultado: %s venceu!\n", cidade2);
                else
                    printf("\nResultado: Empate!\n");
                break;

            case 4:
                printf("Comparação (Atributo: Densidade Populacional)\n\n");
                printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade_populacional1);
                printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade_populacional2);
                if (densidade_populacional1 < densidade_populacional2)
                    printf("\nResultado: %s venceu! (menor densidade)\n", cidade1);
                else if (densidade_populacional2 < densidade_populacional1)
                    printf("\nResultado: %s venceu! (menor densidade)\n", cidade2);
                else
                    printf("\nResultado: Empate!\n");
                break;

            case 5:
                printf("Comparação (Atributo: PIB per Capita)\n\n");
                printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib_per_capita1);
                printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib_per_capita2);
                if (pib_per_capita1 > pib_per_capita2)
                    printf("\nResultado: %s venceu!\n", cidade1);
                else if (pib_per_capita2 > pib_per_capita1)
                    printf("\nResultado: %s venceu!\n", cidade2);
                else
                    printf("\nResultado: Empate!\n");
                break;

            case 6:
                printf("\nFinalizando análise... Até logo!\n");
                break;

            default:
                printf("\nOpção inválida! Escolha novamente.\n");
        }

    } while(opcao != 6);

    return 0;
}

