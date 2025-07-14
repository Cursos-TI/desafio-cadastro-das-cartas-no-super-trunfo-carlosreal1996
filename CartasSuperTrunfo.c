#include <stdio.h>

struct CartaSuperTrunfo {
    char estado;
    char codigo_carta[5];
    char nome_cidade[50];
    unsigned long int populacao;
    float area_km2;
    float pib_bilhoes_reais;
    int numero_pontos_turisticos;
};

int main() {
    struct CartaSuperTrunfo carta1;
    struct CartaSuperTrunfo carta2;

    printf("--- Por favor, digite as informações da PRIMEIRA Carta ---\n");

    printf("Qual o Estado (digite uma letra de A a H e aperte Enter): ");
    scanf(" %c", &carta1.estado);

    printf("Qual o Código da Carta (ex: A01, B03 e aperte Enter): ");
    scanf("%s", carta1.codigo_carta);

    char c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Qual o Nome da Cidade (pode ter espaços, e aperte Enter no final): ");
    fgets(carta1.nome_cidade, sizeof(carta1.nome_cidade), stdin);

    printf("Qual a População (digite só números grandes e aperte Enter): ");
    scanf("%lu", &carta1.populacao);

    printf("Qual a Área em km² (ex: 1521.11, use ponto para decimais e aperte Enter): ");
    scanf("%f", &carta1.area_km2);

    printf("Qual o PIB em bilhões de reais (ex: 699.28, use ponto para decimais e aperte Enter): ");
    scanf("%f", &carta1.pib_bilhoes_reais);

    printf("Qual o Número de Pontos Turísticos (digite só números e aperte Enter): ");
    scanf("%d", &carta1.numero_pontos_turisticos);

    printf("\n");

    printf("--- Por favor, digite as informações da SEGUNDA Carta ---\n");

    printf("Qual o Estado (digite uma letra de A a H e aperte Enter): ");
    scanf(" %c", &carta2.estado);

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Qual o Código da Carta (ex: A01, B03 e aperte Enter): ");
    scanf("%s", carta2.codigo_carta);

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Qual o Nome da Cidade (pode ter espaços, e aperte Enter no final): ");
    fgets(carta2.nome_cidade, sizeof(carta2.nome_cidade), stdin);

    printf("Qual a População (digite só números grandes e aperte Enter): ");
    scanf("%lu", &carta2.populacao);

    printf("Qual a Área em km² (ex: 1521.11, use ponto para decimais e aperte Enter): ");
    scanf("%f", &carta2.area_km2);

    printf("Qual o PIB em bilhões de reais (ex: 699.28, use ponto para decimais e aperte Enter): ");
    scanf("%f", &carta2.pib_bilhoes_reais);

    printf("Qual o Número de Pontos Turísticos (digite só números e aperte Enter): ");
    scanf("%d", &carta2.numero_pontos_turisticos);

    printf("\n");

    float densidade_populacional_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1;

    float densidade_populacional_carta2;
    float pib_per_capita_carta2;
    float super_poder_carta2;

    densidade_populacional_carta1 = (float)carta1.populacao / carta1.area_km2;
    pib_per_capita_carta1 = (carta1.pib_bilhoes_reais * 1000000000.0) / carta1.populacao;

    super_poder_carta1 = (float)carta1.populacao +
                         carta1.area_km2 +
                         (carta1.pib_bilhoes_reais * 1000000000.0) +
                         (float)carta1.numero_pontos_turisticos +
                         pib_per_capita_carta1 +
                         (1.0 / densidade_populacional_carta1);

    densidade_populacional_carta2 = (float)carta2.populacao / carta2.area_km2;
    pib_per_capita_carta2 = (carta2.pib_bilhoes_reais * 1000000000.0) / carta2.populacao;

    super_poder_carta2 = (float)carta2.populacao +
                         carta2.area_km2 +
                         (carta2.pib_bilhoes_reais * 1000000000.0) +
                         (float)carta2.numero_pontos_turisticos +
                         pib_per_capita_carta2 +
                         (1.0 / densidade_populacional_carta2);

    printf("--- As informações da PRIMEIRA Carta são: ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s", carta1.nome_cidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib_bilhoes_reais);
    printf("Número de Pontos Turísticos: %d\n", carta1.numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);
    printf("Super Poder: %.2f\n", super_poder_carta1);

    printf("\n");

    printf("--- As informações da SEGUNDA Carta são: ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s", carta2.nome_cidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib_bilhoes_reais);
    printf("Número de Pontos Turísticos: %d\n", carta2.numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);
    printf("Super Poder: %.2f\n", super_poder_carta2);

    printf("\n");

    printf("Comparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n",
           (carta1.populacao > carta2.populacao ? 1 : 2),
           (carta1.populacao > carta2.populacao ? 1 : 0));

    printf("Área: Carta %d venceu (%d)\n",
           (carta1.area_km2 > carta2.area_km2 ? 1 : 2),
           (carta1.area_km2 > carta2.area_km2 ? 1 : 0));

    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.pib_bilhoes_reais > carta2.pib_bilhoes_reais ? 1 : 2),
           (carta1.pib_bilhoes_reais > carta2.pib_bilhoes_reais ? 1 : 0));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (carta1.numero_pontos_turisticos > carta2.numero_pontos_turisticos ? 1 : 2),
           (carta1.numero_pontos_turisticos > carta2.numero_pontos_turisticos ? 1 : 0));

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 2),
           (densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 0));

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 2),
           (pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0));

    printf("Super Poder: Carta %d venceu (%d)\n",
           (super_poder_carta1 > super_poder_carta2 ? 1 : 2),
           (super_poder_carta1 > super_poder_carta2 ? 1 : 0));

    return 0;
}