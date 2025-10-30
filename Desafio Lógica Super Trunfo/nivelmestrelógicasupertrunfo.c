#include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta de país
typedef struct {
    char nomePais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica; // calculada: populacao / area
} Carta;

// Função auxiliar para exibir o menu de atributos
void exibirMenu(int excluir) {
    printf("\nEscolha um atributo para comparar:\n");
    if (excluir != 1) printf("1 - População\n");
    if (excluir != 2) printf("2 - Área\n");
    if (excluir != 3) printf("3 - PIB\n");
    if (excluir != 4) printf("4 - Pontos Turísticos\n");
    if (excluir != 5) printf("5 - Densidade Demográfica\n");
    printf("=============================================\n");
    printf("Digite sua opção: ");
}

int main() {
    // ======== Cadastro das cartas ========
    Carta carta1, carta2;

    strcpy(carta1.nomePais, "Brasil");
    carta1.populacao = 214000000;
    carta1.area = 8516000.0;
    carta1.pib = 2200000000000.0;
    carta1.pontosTuristicos = 35;
    carta1.densidadeDemografica = carta1.populacao / carta1.area;

    strcpy(carta2.nomePais, "Argentina");
    carta2.populacao = 46000000;
    carta2.area = 2780000.0;
    carta2.pib = 640000000000.0;
    carta2.pontosTuristicos = 28;
    carta2.densidadeDemografica = carta2.populacao / carta2.area;

    printf("=============================================\n");
    printf("      SUPER TRUNFO - DESAFIO MESTRE\n");
    printf("=============================================\n");
    printf("Carta 1: %s\n", carta1.nomePais);
    printf("Carta 2: %s\n", carta2.nomePais);
    printf("=============================================\n");

    int atributo1 = 0, atributo2 = 0;

    // ======== Escolha do primeiro atributo ========
    exibirMenu(0);
    scanf("%d", &atributo1);

    // validação
    if (atributo1 < 1 || atributo1 > 5) {
        printf("\nOpção inválida! Encerrando o programa.\n");
        return 1;
    }

    // ======== Escolha do segundo atributo ========
    exibirMenu(atributo1);
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("\nOpção inválida ou repetida! Encerrando o programa.\n");
        return 1;
    }

    printf("\n=============================================\n");
    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);
    printf("=============================================\n\n");

    // ======== Cálculo e comparação ========
    float valor1Atrib1 = 0, valor2Atrib1 = 0;
    float valor1Atrib2 = 0, valor2Atrib2 = 0;

    // ======== Função interna de comparação ========
    float compararAtributo(Carta c1, Carta c2, int atributo) {
        switch (atributo) {
            case 1: return (float)c1.populacao;
            case 2: return c1.area;
            case 3: return c1.pib;
            case 4: return (float)c1.pontosTuristicos;
            case 5: return c1.densidadeDemografica;
            default: return 0;
        }
    }

    valor1Atrib1 = compararAtributo(carta1, carta2, atributo1);
    valor2Atrib1 = compararAtributo(carta2, carta1, atributo1);
    valor1Atrib2 = compararAtributo(carta1, carta2, atributo2);
    valor2Atrib2 = compararAtributo(carta2, carta1, atributo2);

    // ======== Exibição dos atributos escolhidos ========
    char nomeAtrib1[30], nomeAtrib2[30];
    switch (atributo1) {
        case 1: strcpy(nomeAtrib1, "População"); break;
        case 2: strcpy(nomeAtrib1, "Área"); break;
        case 3: strcpy(nomeAtrib1, "PIB"); break;
        case 4: strcpy(nomeAtrib1, "Pontos Turísticos"); break;
        case 5: strcpy(nomeAtrib1, "Densidade Demográfica"); break;
    }
    switch (atributo2) {
        case 1: strcpy(nomeAtrib2, "População"); break;
        case 2: strcpy(nomeAtrib2, "Área"); break;
        case 3: strcpy(nomeAtrib2, "PIB"); break;
        case 4: strcpy(nomeAtrib2, "Pontos Turísticos"); break;
        case 5: strcpy(nomeAtrib2, "Densidade Demográfica"); break;
    }

    // ======== Comparações individuais ========
    printf("Comparação 1 - %s:\n", nomeAtrib1);
    printf("%s: %.2f | %s: %.2f\n", carta1.nomePais, valor1Atrib1, carta2.nomePais, valor2Atrib1);

    // operador ternário para decidir vencedor de cada atributo
    int pontos1 = 0, pontos2 = 0;

    // atributo 1
    if (atributo1 == 5) // densidade: menor vence
        (valor1Atrib1 < valor2Atrib1) ? pontos1++ : (valor2Atrib1 < valor1Atrib1 ? pontos2++ : 0);
    else
        (valor1Atrib1 > valor2Atrib1) ? pontos1++ : (valor2Atrib1 > valor1Atrib1 ? pontos2++ : 0);

    printf("Comparação 2 - %s:\n", nomeAtrib2);
    printf("%s: %.2f | %s: %.2f\n", carta1.nomePais, valor1Atrib2, carta2.nomePais, valor2Atrib2);

    // atributo 2
    if (atributo2 == 5) // densidade: menor vence
        (valor1Atrib2 < valor2Atrib2) ? pontos1++ : (valor2Atrib2 < valor1Atrib2 ? pontos2++ : 0);
    else
        (valor1Atrib2 > valor2Atrib2) ? pontos1++ : (valor2Atrib2 > valor1Atrib2 ? pontos2++ : 0);

    // ======== Soma dos atributos ========
    float soma1 = valor1Atrib1 + valor1Atrib2;
    float soma2 = valor2Atrib1 + valor2Atrib2;

    printf("\n=============================================\n");
    printf("Soma dos Atributos:\n");
    printf("%s: %.2f\n", carta1.nomePais, soma1);
    printf("%s: %.2f\n", carta2.nomePais, soma2);
    printf("=============================================\n");

    // ======== Determinação do vencedor final ========
    if (soma1 > soma2)
        printf("🏆 %s venceu!\n", carta1.nomePais);
    else if (soma2 > soma1)
        printf("🏆 %s venceu!\n", carta2.nomePais);
    else
        printf("🤝 Empate!\n");

    printf("=============================================\n");

    return 0;
}
