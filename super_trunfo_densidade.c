#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[3];
    char nomeCidade[50];
    int populacao;
    float area;
    float densidade;
};

int main() {
    struct Carta carta1, carta2;

    strcpy(carta1.estado, "SP");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.densidade = carta1.populacao / carta1.area;

    strcpy(carta2.estado, "RJ");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1182.3;
    carta2.densidade = carta2.populacao / carta2.area;

    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo escolhido: Densidade Populacional\n\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidade);
    printf("Carta 2 - %s: %.2f hab/km²\n\n", carta2.nomeCidade, carta2.densidade);

    if (carta1.densidade < carta2.densidade)
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
    else if (carta2.densidade < carta1.densidade)
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

