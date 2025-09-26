#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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

  // Carta 2

  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populaçao2;
  float area2;
  float pib2;
  int pontosturisticos2;



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


  // Área para exibição dos dados da cidade 
  // Carta 1

  printf ("\nCarta 1\n");
  printf ("Estado: %c\n", estado1);
  printf ("Código: %s\n", codigo1);
  printf ("Nome da Cidade: %s\n", cidade1);
  printf ("População: %d\n", populaçao1);
  printf ("Área: %f\n", area1);
  printf ("PIB: %f\n", pib1);
  printf ("Número de Pontos Turisticos: %d\n", pontosturisticos1);

  //Carta 2
  printf ("\nCarta 2\n");
  printf ("Estado: %c\n", estado2);
  printf ("Código: %s\n", codigo2);
  printf ("Nome da Cidade: %s\n", cidade2);
  printf ("População: %d\n", populaçao2);
  printf ("Área: %f\n", area2);
  printf ("PIB: %f\n", pib2);
  printf ("Número de Pontos Turisticos: %d\n", pontosturisticos2);


return 0;
} 
