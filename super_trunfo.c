#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

    
    // ===== Primeira carta =====
    char estado1[3] = "SP";
    char codigo1[50] = "SP123";
    char cidade1[50] = "São Paulo";
    int populacao1 = 1000, pontos_turisticos_1 = 10;
    float area1 = 1213.45, pib1 = 456789012.34;
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // ===== Segunda carta =====
    char estado2[3] = "RJ";
    char codigo2[50] = "RJ123";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 1000, pontos_turisticos_2 = 10;
    float area2 = 1182.30, pib2 = 789012345.67;
    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    


    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\n");
    printf("B. Pontos Turísticos\n");
    printf("C. Área\n");
    printf("D. PIB\n");
    printf("E. Densidade Populacional\n");
    printf("F. PIB per Capita\n");

    printf("Escolha a comparação:\n");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf("Você escolheu População.\n");
        if (populacao1 > populacao2)
        resultado1 = 1;
    else if (populacao1 < populacao2)
        resultado1 = -1;
    else
        resultado1 = 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu Pontos Turísticos.\n");
        if (pontos_turisticos_1 > pontos_turisticos_2)
        resultado1 = 1;
    else if (pontos_turisticos_1 < pontos_turisticos_2)
        resultado1 = -1;
    else
        resultado1 = 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu Área.\n");
        if (area1 > area2)
            resultado1 = 1;
        else if (area1 < area2)
            resultado1 = -1;
        else
            resultado1 = 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu PIB.\n");
        if (pib1 > pib2)
            resultado1 = 1;
        else if (pib1 < pib2)
            resultado1 = -1;
        else
            resultado1 = 0;
        break;
    case 'E':
    case 'e':
        printf("Você escolheu Densidade Populacional.\n");
        if (densidade_populacional1 < densidade_populacional2)
            resultado1 = 1;
        else if (densidade_populacional1 > densidade_populacional2)
            resultado1 = -1;
        else
            resultado1 = 0;
        break;
    case 'F':
    case 'f':
        printf("Você escolheu PIB per Capita.\n");
        if (pib_per_capita1 > pib_per_capita2)
            resultado1 = 1;
        else if (pib_per_capita1 < pib_per_capita2)
            resultado1 = -1;
        else
            resultado1 = 0;
        break;

    default:
    printf("Opção inválida.\n");
        break;
    }

    printf("Escolha o segundo atributo:\n");
    printf("Atenção: Escolha um atributo diferente do primeiro.\n");
    printf("A. População\n");
    printf("B. Pontos Turísticos\n");
    printf("C. Área\n");
    printf("D. PIB\n");
    printf("E. Densidade Populacional\n");
    printf("F. PIB per Capita\n");
    scanf(" %c", &segundoAtributo);

    if(primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo. Escolha um diferente.\n");
        return 0;
    }else{
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu População.\n");
            if (populacao1 > populacao2)
                resultado2 = 1;
            else if (populacao1 < populacao2)
                resultado2 = -1;
            else
                resultado2 = 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu Pontos Turísticos.\n");
            if (pontos_turisticos_1 > pontos_turisticos_2)
                resultado2 = 1;
            else if (pontos_turisticos_1 < pontos_turisticos_2)
                resultado2 = -1;
            else
                resultado2 = 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu Área.\n");
            if (area1 > area2)
                resultado2 = 1;
            else if (area1 < area2)
                resultado2 = -1;
            else
                resultado2 = 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu PIB.\n");
            if (pib1 > pib2)
                resultado2 = 1;
            else if (pib1 < pib2)
                resultado2 = -1;
            else
                resultado2 = 0;
            break;
        case 'E':
        case 'e':
            printf("Você escolheu Densidade Populacional.\n");
            if (densidade_populacional1 < densidade_populacional2)
                resultado2 = 1;
            else if (densidade_populacional1 > densidade_populacional2)
                resultado2 = -1;
            else
                resultado2 = 0;
            break;
        case 'F':
        case 'f':
            printf("Você escolheu PIB per Capita.\n");
            if (pib_per_capita1 > pib_per_capita2)
                resultado2 = 1;
            else if (pib_per_capita1 < pib_per_capita2)
                resultado2 = -1;
            else
                resultado2 = 0;
            break;
        
        default:
            printf("Opção inválida.\n");
            break;
        }
    }

    if (resultado1 == 1 && resultado2 == 1) {
    printf("Parabéns! Você venceu!\n");
} else if (resultado1 == -1 && resultado2 == -1) {
    printf("Que pena! Você perdeu!.\n");
} else if (resultado1 == 0 && resultado2 == 0) {
    printf("Empate!\n");
} 

    return 0;
}
