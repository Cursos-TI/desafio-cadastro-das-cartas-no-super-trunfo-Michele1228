#include <stdio.h>

int main() {

    // Variáveis para armazenar dados da Carta1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome_da_cidade1[20] = "Ceara";
    int populacao1 = 8794957;
    float area1 = 148.886; // em km²
    float pib1 = 194.885;  // em bilhões de reais
    int numero_de_pontos_turisticos1 = 40;

    // Variáveis para armazenar dados da Carta2
    char estado2 = 'B';
    char codigo2[] = "A02";
    char nome_da_cidade2[20] = "Maranhao";
    int populacao2 = 6775152;
    float area2 = 31.983; // em km²
    float pib2 = 124.981; // em bilhões de reais
    int numero_de_pontos_turisticos2 = 10;

    // Cálculo da densidade populacional
    float densidade_populacional1 = populacao1 / area1;
    float densidade_populacional2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibindo os dados da Carta1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    // Exibindo os dados da Carta2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    return 0;

    }

