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


   // Exibir dados da Carta 1
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

    // Exibir dados da Carta 2
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

    // Comparações
    printf("\n--- Resultados das Comparações ---\n");

    // População (maior vence)
    printf("População:\n  Carta 1 (%s): %d habitantes\n  Carta 2 (%s): %d habitantes\n",
           nome_da_cidade1, populacao1, nome_da_cidade2, populacao2);
    printf("  Vencedora: %s\n\n", (populacao1 > populacao2) ? nome_da_cidade1 : nome_da_cidade2);

    // Área (maior vence)
    printf("Área:\n  Carta 1 (%s): %.3f km²\n  Carta 2 (%s): %.3f km²\n",
           nome_da_cidade1, area1, nome_da_cidade2, area2);
    printf("  Vencedora: %s\n\n", (area1 > area2) ? nome_da_cidade1 : nome_da_cidade2);

    // PIB (maior vence)
    printf("PIB:\n  Carta 1 (%s): R$ %.3f bilhões\n  Carta 2 (%s): R$ %.3f bilhões\n",
           nome_da_cidade1, pib1, nome_da_cidade2, pib2);
    printf("  Vencedora: %s\n\n", (pib1 > pib2) ? nome_da_cidade1 : nome_da_cidade2);

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos:\n  Carta 1 (%s): %d\n  Carta 2 (%s): %d\n",
           nome_da_cidade1, numero_de_pontos_turisticos1, nome_da_cidade2, numero_de_pontos_turisticos2);
    printf("  Vencedora: %s\n\n", (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) ? nome_da_cidade1 : nome_da_cidade2);

    // Densidade populacional (menor vence)
    printf("Densidade Populacional (menor vence):\n  Carta 1 (%s): %.2f hab/km²\n  Carta 2 (%s): %.2f hab/km²\n",
           nome_da_cidade1, densidade_populacional1, nome_da_cidade2, densidade_populacional2);
    printf("  Vencedora: %s\n\n", (densidade_populacional1 < densidade_populacional2) ? nome_da_cidade1 : nome_da_cidade2);

    // PIB per capita (maior vence)
    printf("PIB per Capita:\n  Carta 1 (%s): R$ %.2f\n  Carta 2 (%s): R$ %.2f\n",
           nome_da_cidade1, pib_per_capita1, nome_da_cidade2, pib_per_capita2);
    printf("  Vencedora: %s\n\n", (pib_per_capita1 > pib_per_capita2) ? nome_da_cidade1 : nome_da_cidade2);


    return 0;
}

