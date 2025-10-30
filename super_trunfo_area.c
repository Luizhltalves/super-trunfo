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
    carta1.area = 1521.11;

    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "A02");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.area = 1182.3;

    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: Área\n\n");
    printf("Carta 1 - %s: %.2f km²\n", carta1.nomeCidade, carta1.area);
    printf("Carta 2 - %s: %.2f km²\n\n", carta2.nomeCidade, carta2.area);

    if (carta1.area > carta2.area)
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    else if (carta2.area > carta1.area)
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

