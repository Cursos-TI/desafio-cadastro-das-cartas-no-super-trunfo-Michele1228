#include <stdio.h>
 
int main() {

    //Váriaveis para armazenar dados Carta1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome_da_cidade1[20] = "Ceara";
    int populacao1 = 8794957;
    float area1 = 148.886; // em km²
    float pib1 = 194.885;  // em bilhões de reais
    int numero_de_pontos_turisticos1 = 40;


     //Váriaveis para armazenar dados Carta2
    char estado2 = 'B';
    char codigo2[] = "A02";
    char nome_da_cidade2 [20] = "Maranhao";
    int populacao2 = 6775152;
    float area2 = 31.983; // em km²
    float pib2 = 124.981; // bilhões de Reais
    int numero_de_pontos_turisticos2= 10;
    
     // Exibindo os dados dados da Carta1
    printf("Estado1: %c\n", estado1);
    printf("Código1: %s\n", codigo1);
    printf("Nome da Cidade1: %s\n", nome_da_cidade1);
    printf("População1: %d\n", populacao1);
    printf("Área1: %.3f km²\n", area1);
    printf("PIB1: %.3f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos1: %d\n", numero_de_pontos_turisticos1);
   
    // Pula uma linha antes da próxima carta 
    printf("\n");
    
     // Exibindo os dados dados da Carta2
     printf("Estado2: %c\n", estado2);
     printf("Código2: %s\n", codigo2);
     printf("Nome da Cidade2: %s\n", nome_da_cidade2);
     printf("População2: %d\n", populacao2);
     printf("Área2: %.3f km²\n", area2);
     printf("PIB2: %.3f bilhões de reais\n", pib2);
     printf("Número de pontos turísticos2: %d\n", numero_de_pontos_turisticos2);

    return 0;
}
