#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, codigo, nome_cidade;
  int populaçao, pontos_tur;
  float area, pib;
  // Área para entrada de dados
  // nesta parte é para exibir os dados que serão inseridos pelo usuário na carta
  printf("Estado: ");
  scanf("%s", &estado);
  printf("Código: ");
  scanf("%s", &codigo);
  printf("Nome da cidade: ");
  scanf("%s", &nome_cidade);
  printf("População: ");
  scanf("%d", &populaçao);
  printf("Área: ");
  scanf("%f", &area);
  printf("PIB: ");
  scanf("%f", &pib);
  printf("Pontos turísticos: ");
  scanf("%d", &pontos_tur);
 
  // Área para exibição dos dados da idade
  printf("CARTA 1\n");

return 0;
} 
