#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1;
  char codigo_1[5], codigo_2[5];
  char cidade_1[20], cidade_2[20];
  unsigned long int populacao_1; 
  int turismo_1;
  float area_1;
  long double PIB_1;

  char  estado_2;
  unsigned long int populacao_2;
  int turismo_2;
  float area_2;
  long double PIB_2;

  // Área para entrada de dados
  printf("Digite uma letra para o Estado (A-H): ");
  scanf(" %c", &estado_1);

  printf("Digite o código do Estado escolhido (Ex: X001): ");
  scanf("%s", codigo_1);

  printf("Digite o nome da cidade: ");
  scanf("%s", cidade_1);

  printf("Digite o número da população: ");
  scanf("%lu", &populacao_1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &turismo_1);

  printf("Digite a área(km²): ");
  scanf("%f", &area_1);

  printf("Digite o PIB: ");
  scanf("%Lf", &PIB_1);

  printf("------------------------------- \n");

  printf("Digite uma letra para o Estado 2 (A-H): ");
  scanf(" %c", &estado_2);

  printf("Digite o código do Estado 2 escolhido (Ex: X001): ");
  scanf("%s", codigo_2);

  printf("Digite o nome da cidade 2: ");
  scanf("%s", cidade_2);

  printf("Digite o número da população: ");
  scanf("%lu", &populacao_2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf("%d", &turismo_2);

  printf("Digite a área(km²): ");
  scanf("%f", &area_2);

  printf("Digite o PIB: ");
  scanf("%Lf", &PIB_2);

  printf("========================================\n");

   // Área para cálculo de densidade populacional e PIB per capita
  float densidade_1 = (float)populacao_1 / area_1;
  long double percapita_1 = (double)PIB_1 / populacao_1;

  float densidade_2 = (float)populacao_2 / area_2;
  long double percapita_2 = (double)PIB_2 / populacao_2;

  // Área para cálculo do Super poder e inverso da densidade
  double inverdensidade_1, inverdensidade_2;

  inverdensidade_1 = (float)area_1 / populacao_1;
  inverdensidade_2 = (float)area_2 / populacao_2;

  long double super_1, super_2;

  super_1 = (long double)populacao_1 + turismo_1 + area_1 + PIB_1 + inverdensidade_1 + percapita_1;
  super_2 = (long double)populacao_2 + turismo_2 + area_2 + PIB_2 + inverdensidade_2 + percapita_2;

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado: %c\n Código: %s\n Cidade: %s\n ", estado_1, codigo_1, cidade_1);
  printf("População: %lu\n Pontos Turísticos: %d\n Área: %.3f\n PIB: %.2Lf\n", populacao_1, turismo_1, area_1, PIB_1);
  printf("Densidade Populacional: %.2f\n PIB per Capita: %.2Lf\n", densidade_1, percapita_1);
  printf("Super Poder: %.2Lf\n", super_1);

  printf("-------------------------------\n");

  printf("Carta 2:\n");
  printf("Estado: %c\n Código: %s\n Cidade: %s\n ", estado_2, codigo_2, cidade_2);
  printf("População: %lu\n Pontos Turísticos: %d\n Área: %.3f\n PIB: %.2Lf\n", populacao_2, turismo_2, area_2, PIB_2);
  printf("Densidade Populacional: %.2f\n PIB per Capita: %.2Lf\n", densidade_2, percapita_2);
  printf("Super Poder: %.2Lf\n", super_2);

  printf("============================================\n");

  // Área para comparação das cartas
  printf("Comparação das Cartas (Carta 1 = 1 e Carta 2 = 0):\n");
  printf("População: %d\n Pontos Turísticos: %d\n Área: %d\n PIB: %d\n", populacao_1 > populacao_2, turismo_1 > turismo_2, area_1 > area_2, PIB_1 > PIB_2);
  printf("Densidade Populacional: %d\n PIB per Capita: %d\n", densidade_1 < densidade_2, percapita_1 > percapita_2);
  printf("Super Poder: %d", super_1 > super_2);


return 0;
} 
