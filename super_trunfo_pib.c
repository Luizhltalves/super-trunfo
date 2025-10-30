#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char nomeCidade[50];
    float pib;
};

int main() {
    struct Carta carta1, carta2;

    strcpy(carta1.estado, "SP");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.pib = 800.0;

    strcpy(carta2.estado, "RJ");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.pib = 400.0;

    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: PIB\n\n");
    printf("Carta 1 - %s: %.2f bilhões\n", carta1.nomeCidade, carta1.pib);
    printf("Carta 2 - %s: %.2f bilhões\n\n", carta2.nomeCidade, carta2.pib);

    if (carta1.pib > carta2.pib)
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    else if (carta2.pib > carta1.pib)
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

