#include <stdio.h>
int main(){

    //primeira carta
    char estado1[3] = "SP";
    char codigo1[50] = "SP123";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12345678, pontos_turisticos_1 = 10;
    float area1 = 1213.45, pib1 = 456789012.34;
    float densidade_populacional1 = (float)populacao1/area1; //densidade populacional
    float pib_per_capita1 = pib1/populacao1; //pib per capita

    

    //segunda carta
    char estado2[3] = "RJ";
    char codigo2[50] = "RJ123";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6789012, pontos_turisticos_2 = 5;
    float area2 = 1182.30, pib2 = 789012345.67;
    float densidade_populacional2 = (float)populacao2/area2; //densidade populacional
    float pib_per_capita2 = pib2/populacao2; //pib per capita

    printf("Comparaçao de Cartas (Atributo: População)\n"); //exibindo as informaçoes e o resultado da comparaçao da populaçao
    printf("Carta 1: %s, População: %d\n", cidade1, populacao1);
    printf("Carta 2: %s, População: %d\n", cidade2, populacao2);
    if (populacao1 > populacao2) {                          //maior populaçao vence
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    printf("Comparaçao de Cartas (Atributo: Area)\n"); //exibindo as informaçoes e o resultado da comparaçao da area
    printf("Carta 1: %s, Area: %.2f\n", cidade1, area1);
    printf("Carta 2: %s, Area: %.2f\n", cidade2, area2);
    if (area1 > area2) {                               //maior area vence
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    printf("Comparaçao de Cartas (Atributo: PIB)\n");//exibindo as informaçoes e o resultado da comparaçao do pib
    printf("Carta 1: %s, PIB: %.2f\n", cidade1, pib1);
    printf("Carta 2: %s, PIB: %.2f\n", cidade2, pib2);
    if (pib1 > pib2) {                               //maior pib vence
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

    printf("Comparaçao de Cartas (Atributo: Pontos Turísticos)\n");//exibindo as informaçoes e o resultado da comparaçao dos pontos turisticos
    printf("Carta 1: %s, Pontos Turísticos: %d\n", cidade1, pontos_turisticos_1);
    printf("Carta 2: %s, Pontos Turísticos: %d\n", cidade2, pontos_turisticos_2);
    if (pontos_turisticos_1 > pontos_turisticos_2) {//mais pontos turisticos vence
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }
    printf("Comparaçao de Cartas (Atributo: Densidade Populacional)\n");//exibindo as informaçoes e o resultado da comparaçao da densidade populacional
    printf("Carta 1: %s, Densidade Populacional: %.2f\n", cidade1, densidade_populacional1);
    printf("Carta 2: %s, Densidade Populacional: %.2f\n", cidade2, densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2) {//menor densidade populacional vence
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }else {
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }

}
