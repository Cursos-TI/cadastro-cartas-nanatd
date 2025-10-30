#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    // Declaração das duas cartas
    Carta carta1, carta2;

    // ======= Cadastro da primeira carta =======
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699280000000.0; // PIB em reais
    carta1.numPontosTuristicos = 25;

    // Cálculo dos indicadores
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // ======= Cadastro da segunda carta =======
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "A02");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1200.27;
    carta2.pib = 364000000000.0;
    carta2.numPontosTuristicos = 20;

    // Cálculo dos indicadores
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ======= Escolha do atributo para comparação =======

    const char atributoComparado[] = "pibpercapita";

    printf("=============================================\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: %s)\n", atributoComparado);
    printf("=============================================\n\n");

    // ======= Lógica de comparação =======
    if (strcmp(atributoComparado, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d habitantes\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d habitantes\n\n", carta2.nomeCidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.populacao > carta1.populacao)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (strcmp(atributoComparado, "area") == 0) {
        printf("Carta 1 - %s (%s): %.2f km²\n", carta1.nomeCidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f km²\n\n", carta2.nomeCidade, carta2.estado, carta2.area);

        if (carta1.area > carta2.area)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.area > carta1.area)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (strcmp(atributoComparado, "pib") == 0) {
        printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): R$ %.2f\n\n", carta2.nomeCidade, carta2.estado, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.pib > carta1.pib)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (strcmp(atributoComparado, "densidade") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);

        // Para densidade, a MENOR vence
        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else if (strcmp(atributoComparado, "pibpercapita") == 0) {
        printf("Carta 1 - %s (%s): R$ %.2f por habitante\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): R$ %.2f por habitante\n\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
        else
            printf("Resultado: Empate!\n");
    }
    else {
        printf("Atributo inválido!\n");
    }

    printf("\n=============================================\n");

    return 0;
}