#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct CartaSuperTrunfo {
    char estado;                // Pra guardar uma única letra, tipo 'A' ou 'B'
    char codigo_carta[5];       // Pra guardar o código da carta, tipo "A01".
    char nome_cidade[50];       // Pra guardar o nome da cidade. 
    int populacao;              // Pra guardar um número inteiro, a população.
    float area_km2;             // Pra guardar um número com vírgula, a área.
    float pib_bilhoes_reais;    // Pra guardar outro número com vírgula, o PIB.
    int numero_pontos_turisticos; // Pra guardar um número inteiro, os pontos turísticos.
};

int main() {

    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    // --- dados da PRIMEIRA CARTA ---
    printf("-- Digite as informações da Primeira Carta --\n");

    printf("Qual o Estado (digite uma letra de A a H e aperte Enter): ");
    scanf(" %c", &carta1.estado);

    printf("Qual o Código da Carta (ex: A01, B03 e aperte Enter): ");
    scanf("%s", carta1.codigo_carta);

    char c;
    while ((c = getchar()) != '\n' && c != EOF); 

    printf("Qual o Nome da Cidade (pode ter espaços, e aperte Enter no final): ");
   
    fgets(carta1.nome_cidade, sizeof(carta1.nome_cidade), stdin);


    printf("Qual a População (digite só números e aperte Enter): ");

    scanf("%d", &carta1.populacao);

    printf("Qual a Área em km² (ex: 1521.11, use ponto para decimais e aperte Enter): ");

    scanf("%f", &carta1.area_km2);

    printf("Qual o PIB em bilhões de reais (ex: 699.28, use ponto para decimais e aperte Enter): ");

    scanf("%f", &carta1.pib_bilhoes_reais);

    printf("Qual o Número de Pontos Turísticos (digite só números e aperte Enter): ");
    scanf("%d", &carta1.numero_pontos_turisticos);

    printf("\n"); 

    // -- dados da SEGUNDA CARTA --
    printf("-- Por favor, digite as informações da Segunda Carta --\n");

    printf("Qual o Estado (digite uma letra de A a H e aperte Enter): ");
    scanf(" %c", &carta2.estado);


    while ((c = getchar()) != '\n' && c != EOF); 

    printf("Qual o Código da Carta (ex: A01, B03 e aperte Enter): ");
    scanf("%s", carta2.codigo_carta);

   
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Qual o Nome da Cidade (pode ter espaços, e aperte Enter no final): ");
    fgets(carta2.nome_cidade, sizeof(carta2.nome_cidade), stdin);


    printf("Qual a População (digite só números e aperte Enter): ");
    scanf("%d", &carta2.populacao);

    printf("Qual a Área em km² (ex: 1521.11, use ponto para decimais e aperte Enter): ");
    scanf("%f", &carta2.area_km2);

    printf("Qual o PIB em bilhões de reais (ex: 699.28, use ponto para decimais e aperte Enter): ");
    scanf("%f", &carta2.pib_bilhoes_reais);

    printf("Qual o Número de Pontos Turísticos (digite só números e aperte Enter): ");
    scanf("%d", &carta2.numero_pontos_turisticos);

    printf("\n"); 

    // --- INFO DA PRIMEIRA CARTA ---
    printf("--- As informações da PRIMEIRA Carta são: ---\n");
    printf("Estado: %c\n", carta1.estado); 
    printf("Código: %s\n", carta1.codigo_carta); 
    printf("Nome da Cidade: %s", carta1.nome_cidade); 
    printf("População: %d\n", carta1.populacao); 
    printf("Área: %.2f km²\n", carta1.area_km2); 
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes_reais);
    printf("Número de Pontos Turísticos: %d\n", carta1.numero_pontos_turisticos);

    printf("\n"); 

   // --- INFO DA SEGUNDA CARTA ---
    printf("--- As informações da SEGUNDA Carta são: ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s", carta2.nome_cidade); 
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes_reais);
    printf("Número de Pontos Turísticos: %d\n", carta2.numero_pontos_turisticos);

    return 0; 
}