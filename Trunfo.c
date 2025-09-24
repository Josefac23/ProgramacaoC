#include <stdio.h>
int main(){

    //primeira carta
    char estado1[3];
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1, pib1, pontos_turisticos_1;

    printf("Carta 1: \n");
    printf("Digite o primeiro estado: ");
    scanf(" %2s", estado1);
    printf("Estado: %s\n", estado1);

    printf("Digite o primeiro código: ");
    scanf("%s", codigo1);
    printf("Código: %s\n", codigo1);

    printf("Digite a primeira cidade: ");
    scanf("%s", cidade1);
    printf("Nome da cidade: %s\n", cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("População: %d\n", populacao1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("Área: %.2f\n", area1); //%f para float decimais

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    printf("PIB: %.2f\n", pib1);

    printf("Digite os pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos_1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_1);

    printf("Densidade Populacional: %.2f\n", (float)populacao1/area1); //densidade populacional

    printf("PIB per capita: %.2f\n", pib1/populacao1); //pib per capita

    //segunda carta
    char estado2[3];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2, pib2, pontos_turisticos_2;

    printf("Carta 2: \n");
    printf("Digite o segundo estado: ");
    scanf(" %2s", estado2);
    printf("Estado: %s\n", estado2);

    printf("Digite o segundo código: ");
    scanf("%s", codigo2);
    printf("Código: %s\n", codigo2);

    printf("Digite a segunda cidade: ");
    scanf("%s", cidade2);
    printf("Nome da cidade: %s\n", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("População: %d\n", populacao2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("Área: %.2f\n", area2); //%f para float decimais

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("PIB: %.2f\n", pib2);

    printf("Digite os pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos_2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_2);

    printf("Densidade Populacional: %.2f\n", (float)populacao2/area2); //densidade populacional

    printf("PIB per capita: %.2f\n", pib2/populacao2); //pib per capita

return 0;

}
