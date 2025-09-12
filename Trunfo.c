#include <stdio.h>
int main(){

    //primeira carta
    char estado1;
    char codigo1[50];
    char cidade1[50];
    int populacao1;
    float area1, pib1, pontos_turisticos_1;
    
    printf("Digite o primeiro estado: ");
    scanf(" %c", &estado1);
    printf("O primeiro é estado: %c\n", estado1);

    printf("Digite o primeiro código: ");
    scanf("%s", codigo1);
    printf("O primeiro código é: %s\n", codigo1);

    printf("Digite a primeira cidade: ");
    scanf("%s", cidade1);
    printf("O nome da primeira cidade é: %s\n", cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("A população da primeira cidade é: %d\n", populacao1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);
    printf("A área da primeira cidade é: %.2f\n", area1); //%f para float decimais

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    printf("O PIB da primeira cidade é: %.2f\n", pib1);

    printf("Digite os pontos turísticos da primeira cidade: ");
    scanf("%f", &pontos_turisticos_1);
    printf("Os pontos turísticos da primeira cidade são: %.2f\n", pontos_turisticos_1);

    //segunda carta
    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2, pib2, pontos_turisticos_2;

    printf("Digite o segundo estado: ");
    scanf(" %c", &estado2);
    printf("O segundo estado é: %c\n", estado2);

    printf("Digite o segundo código: ");
    scanf("%s", codigo2);
    printf("O segundo código é: %s\n", codigo2);

    printf("Digite a segunda cidade: ");
    scanf("%s", cidade2);
    printf("O nome da segunda cidade é: %s\n", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("A população da segunda cidade é: %d\n", populacao2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);
    printf("A área da segunda cidade é: %.2f\n", area2); //%f para float decimais

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    printf("O PIB da segunda cidade é: %.2f\n", pib2);

    printf("Digite os pontos turísticos da segunda cidade: ");
    scanf("%f", &pontos_turisticos_2);
    printf("Os pontos turísticos da segunda cidade são: %.2f\n", pontos_turisticos_2);


return 0;

}
