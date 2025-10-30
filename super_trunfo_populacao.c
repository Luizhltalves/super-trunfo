#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 800.0;
    carta1.numPontosTuristicos = 50;
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;

    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "A02");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1182.3;
    carta2.pib = 400.0;
    carta2.numPontosTuristicos = 45;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: População\n\n");
    printf("Carta 1 - %s: %d habitantes\n", carta1.nomeCidade, carta1.populacao);
    printf("Carta 2 - %s: %d habitantes\n\n", carta2.nomeCidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao)
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    else if (carta2.populacao > carta1.populacao)
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

