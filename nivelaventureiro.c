#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro

int main() { 
  // Área para definição das variáveis para armazenar as propriedades das cidades 
  // Carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populaçao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidadepopulacional1;
  float PibperCapita1;

  // Carta 2

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populaçao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidadepopulacional2;
  float PibperCapita2;



  // Área para entrada de dados 
  // Dados carta 1

  printf ("\nCadastro da carta 1:  \n");
  printf ("Digite o estado (A-H): \n");
  scanf ("%c", &estado1);

  printf ("Digite o codigo da carta (ex:A01): \n");
  scanf ("%s", codigo1);

  printf ("Digite a cidade: \n");
  scanf (" %[^\n]", cidade1);

  printf ("Digite a populaçao: \n");
  scanf ("%d", &populaçao1);

  printf ("Digite a area em km2: \n");
  scanf ("%f", &area1);

  printf ("Digite o pib em bilhoes de reais: \n");
  scanf ("%f", &pib1);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &pontosturisticos1);

  // Dados Carta 2

  printf ("\nCadastro da carta 2:  \n");
  printf ("Digite o estado (A-H): \n");
  scanf (" %c", &estado2);

  printf ("Digite o codigo da carta (ex:B02): \n");
  scanf ("%s", codigo2);

  printf ("Digite a cidade: \n");
  scanf (" %[^\n]", cidade2);

  printf ("Digite a população: \n");
  scanf ("%d", &populaçao2);

  printf ("Digite a area em km2: \n");
  scanf ("%f", &area2);

  printf ("Digite o pib em bilhoes de reais: \n");
  scanf ("%f", &pib2);

  printf ("Digite o numero de pontos turisticos: \n");
  scanf ("%d", &pontosturisticos2);

  // Cálculos densidade populacional e PIB per capita
  densidadepopulacional1 = populaçao1 / area1;
  PibperCapita1 = (pib1 * 1000000000) / populaçao1; 
  
  densidadepopulacional2 = populaçao2 / area2;
  PibperCapita2 = (pib2 * 1000000000) / populaçao2;

  // Área para exibição dos dados da cidade 
  // Carta 1

  printf ("\nCarta 1\n");
  printf ("Estado: %c\n", estado1);
  printf ("Código: %s\n", codigo1);
  printf ("Nome da Cidade: %s\n", cidade1);
  printf ("População: %d\n", populaçao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf ("Número de Pontos Turisticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional1);
  printf("PIB per Capita: %.2f reais\n", PibperCapita1);

  //Carta 2
  printf ("\nCarta 2\n");
  printf ("Estado: %c\n", estado2);
  printf ("Código: %s\n", codigo2);
  printf ("Nome da Cidade: %s\n", cidade2);
  printf ("População: %d\n", populaçao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf ("Número de Pontos Turisticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional2);
  printf("PIB per Capita: %.2f reais\n", PibperCapita2);


return 0;
} 