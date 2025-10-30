#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
typedef struct {
    char nomePais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica; // calculada: populacao / area
} Carta;

int main() {
    // ======== Cadastro das cartas ========
    Carta carta1, carta2;

    // Carta 1
    strcpy(carta1.nomePais, "Brasil");
    carta1.populacao = 214000000;
    carta1.area = 8516000.0;
    carta1.pib = 2200000000000.0;
    carta1.pontosTuristicos = 35;
    carta1.densidadeDemografica = carta1.populacao / carta1.area;

    // Carta 2
    strcpy(carta2.nomePais, "Argentina");
    carta2.populacao = 46000000;
    carta2.area = 2780000.0;
    carta2.pib = 640000000000.0;
    carta2.pontosTuristicos = 28;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    // ======== Exibição inicial ========
    printf("=============================================\n");
    printf("         SUPER TRUNFO - CARTAS DE PAISES\n");
    printf("=============================================\n");
    printf("Carta 1: %s\n", carta1.nomePais);
    printf("Carta 2: %s\n", carta2.nomePais);
    printf("=============================================\n\n");

    int opcao;

    // ======== Menu interativo ========
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("=============================================\n");
    printf("Digite sua opção: ");
    
    // leitura da opção do usuário
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("\n=============================================\n");

    // ======== Switch para selecionar o atributo ========
    switch (opcao) {
        case 1: // População
            printf("Comparação: População\n\n");
            printf("%s: %d habitantes\n", carta1.nomePais, carta1.populacao);
            printf("%s: %d habitantes\n\n", carta2.nomePais, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.populacao > carta1.populacao)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Comparação: Área\n\n");
            printf("%s: %.2f km²\n", carta1.nomePais, carta1.area);
            printf("%s: %.2f km²\n\n", carta2.nomePais, carta2.area);

            if (carta1.area > carta2.area)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.area > carta1.area)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Comparação: PIB\n\n");
            printf("%s: R$ %.2f\n", carta1.nomePais, carta1.pib);
            printf("%s: R$ %.2f\n\n", carta2.nomePais, carta2.pib);

            if (carta1.pib > carta2.pib)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.pib > carta1.pib)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Comparação: Número de Pontos Turísticos\n\n");
            printf("%s: %d pontos turísticos\n", carta1.nomePais, carta1.pontosTuristicos);
            printf("%s: %d pontos turísticos\n\n", carta2.nomePais, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta1.nomePais);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Resultado: %s venceu!\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade demográfica (MENOR vence)
            printf("Comparação: Densidade Demográfica\n\n");
            printf("%s: %.2f hab/km²\n", carta1.nomePais, carta1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n\n", carta2.nomePais, carta2.densidadeDemografica);

            if (carta1.densidadeDemografica < carta2.densidadeDemografica)
                printf("Resultado: %s venceu! (menor densidade populacional)\n", carta1.nomePais);
            else if (carta2.densidadeDemografica < carta1.densidadeDemografica)
                printf("Resultado: %s venceu! (menor densidade populacional)\n", carta2.nomePais);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("=============================================\n");
    return 0;
}

