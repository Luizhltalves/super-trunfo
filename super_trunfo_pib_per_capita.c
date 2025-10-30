#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char nomeCidade[50];
    int populacao;
    float pib;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    strcpy(carta1.estado, "SP");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.pib = 800.0;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;

    strcpy(carta2.estado, "RJ");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.pib = 400.0;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: PIB per Capita\n\n");
    printf("Carta 1 - %s: %.2f reais\n", carta1.nomeCidade, carta1.pibPerCapita);
    printf("Carta 2 - %s: %.2f reais\n\n", carta2.nomeCidade, carta2.pibPerCapita);

    if (carta1.pibPerCapita > carta2.pibPerCapita)
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    else if (carta2.pibPerCapita > carta1.pibPerCapita)
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

