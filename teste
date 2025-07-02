#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char nome_da_cidade1[20] = "Ceara";
    int populacao1 = 8794957;
    float area1 = 148.886;
    float pib1 = 194.885;
    int pontos_turisticos1 = 40;

    // Variáveis da Carta 2
    char nome_da_cidade2[20] = "Maranhao";
    int populacao2 = 6775152;
    float area2 = 31.983;
    float pib2 = 124.981;
    int pontos_turisticos2 = 10;

    // Cálculo da Densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\nPopulação: %d\nÁrea: %.3f km²\nPIB: R$ %.3f bilhões\n", nome_da_cidade1, populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: R$ %.2f\n", pontos_turisticos1, densidade1, pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\nPopulação: %d\nÁrea: %.3f km²\nPIB: R$ %.3f bilhões\n", nome_da_cidade2, populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: R$ %.2f\n", pontos_turisticos2, densidade2, pib_per_capita2);

    // Comparações
    printf("\n--- Resultados das Comparações ---\n");

    // População
    printf("População:\n  Carta 1 (%s): %d Habitantes\n  Carta 2 (%s): %d Habitantes\n", nome_da_cidade1, populacao1, nome_da_cidade2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome_da_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome_da_cidade2);
    }

    // Área
    printf("Área:\n  Carta 1 (%s): %.3f Km²\n  Carta 2 (%s): %.3f Km²\n", nome_da_cidade1, area1, nome_da_cidade2, area2);
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome_da_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome_da_cidade2);
    }

    // PIB
    printf("PIB:\n  Carta 1 (%s): R$ %.3f Bilhões\n  Carta 2 (%s): R$ %.3f Bilhões\n", nome_da_cidade1, pib1, nome_da_cidade2, pib2);
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome_da_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome_da_cidade2);
    }

    // Pontos Turísticos
    printf("Pontos Turísticos:\n  Carta 1 (%s): %d\n  Carta 2 (%s): %d\n", nome_da_cidade1, pontos_turisticos1, nome_da_cidade2, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome_da_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome_da_cidade2);
    }

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional:\n  Carta 1 (%s): %.2f hab/km²\n  Carta 2 (%s): %.2f hab/Km²\n", nome_da_cidade1, densidade1, nome_da_cidade2, densidade2);
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome_da_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome_da_cidade2);
    }

    // PIB per capita
    printf("PIB per Capita:\n  Carta 1 (%s): R$ %.2f\n  Carta 2 (%s): R$ %.2f\n", nome_da_cidade1, pib_per_capita1, nome_da_cidade2, pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n\n", nome_da_cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n\n", nome_da_cidade2);
    }

    return 0;
}
