#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas (Nível Aventureiro)
// Este programa cadastra duas cartas com informações de cidades, calcula densidade populacional e PIB per capita,
// e exibe os dados formatados.

struct Carta {
    char estado;          // Letra representando o estado (ex.: A, B)
    char codigo[4];       // Código da carta (ex.: A01)
    char nome[50];        // Nome da cidade
    int populacao;        // População em habitantes
    float area;           // Área em km²
    float pib;            // PIB em bilhões de reais
    int pontos_turisticos;// Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;
    float densidade1, densidade2; // Variáveis para densidade populacional
    float pib_per_capita1, pib_per_capita2; // Variáveis para PIB per capita

    // Cadastro da primeira carta
    printf("Vamos cadastrar a primeira Carta\n");
    printf("Estado (uma letra): \n");
    scanf("%c", &carta1.estado);
    getchar(); // Limpa o buffer
    printf("Código da Carta: \n");
    scanf("%s", carta1.codigo);
    getchar(); // Limpa o buffer
    printf("Nome da Cidade: \n");
    scanf("%[^\n]", carta1.nome); // Lê string com espaços
    getchar(); // Limpa o buffer
    printf("População: \n");
    scanf("%d", &carta1.populacao);
    getchar(); // Limpa o buffer
    printf("Área (km²): \n");
    scanf("%f", &carta1.area);
    getchar(); // Limpa o buffer
    printf("PIB (bilhões de reais): \n");
    scanf("%f", &carta1.pib);
    getchar(); // Limpa o buffer
    printf("Pontos Turísticos: \n");
    scanf("%d", &carta1.pontos_turisticos);
    getchar(); // Limpa o buffer

    // Cadastro da segunda carta
    printf("Vamos cadastrar a segunda Carta\n");
    printf("Estado (uma letra): \n");
    scanf("%c", &carta2.estado);
    getchar(); // Limpa o buffer
    printf("Código da Carta: \n");
    scanf("%s", carta2.codigo);
    getchar(); // Limpa o buffer
    printf("Nome da Cidade: \n");
    scanf("%[^\n]", carta2.nome); // Lê string com espaços
    getchar(); // Limpa o buffer
    printf("População: \n");
    scanf("%d", &carta2.populacao);
    getchar(); // Limpa o buffer
    printf("Área (km²): \n");
    scanf("%f", &carta2.area);
    getchar(); // Limpa o buffer
    printf("PIB (bilhões de reais): \n");
    scanf("%f", &carta2.pib);
    getchar(); // Limpa o buffer
    printf("Pontos Turísticos: \n");
    scanf("%d", &carta2.pontos_turisticos);
    getchar(); // Limpa o buffer

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidade1 = carta1.populacao / carta1.area; // Densidade = população / área
    pib_per_capita1 = carta1.pib / carta1.populacao; // PIB per capita = PIB / população

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidade2 = carta2.populacao / carta2.area; // Densidade = população / área
    pib_per_capita2 = carta2.pib / carta2.populacao; // PIB per capita = PIB / população

    // Exibição dos dados da primeira carta
    printf("-----------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da segunda carta
    printf("-----------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}