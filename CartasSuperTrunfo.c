#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct Carta {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Vamos cadastrar a primeira Carta \n");
    printf("Código da Carta: \n");
    scanf("%s", carta1.codigo);
    printf("População: \n");
    scanf("%d", &carta1.populacao);
    printf("Área: \n");
    scanf("%f", &carta1.area);
    printf("PIB: \n");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: \n");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("Vamos cadastrar a segunda Carta \n");
    printf("Código da Carta: \n");
    scanf("%s", carta2.codigo);
    printf("População: \n");
    scanf("%d", &carta2.populacao);
    printf("Área: \n");
    scanf("%f", &carta2.area);
    printf("PIB: \n");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: \n");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados da primeira carta
    printf("-----------------\n");
    printf("Carta 1:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);



    return 0;
}