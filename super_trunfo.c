#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char primeiroAtributo, segundoAtributo; //armazena o atributo que o jogador escolheu para jogar
    int resultado1, resultado2;    //Armazena o resultado das rodadas
    

    
    // ===== Primeira carta =====
    char estado1[3] = "SP";
    char codigo1[50] = "SP123";       //Temos as cartas com valores pré definidos
    char cidade1[50] = "São Paulo";
    int populacao1 = 1000, pontos_turisticos_1 = 10;
    float area1 = 4.45, pib1 = 2.34;
    float densidade_populacional1 = (float)populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // ===== Segunda carta =====
    char estado2[3] = "RJ";
    char codigo2[50] = "RJ123";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 1000, pontos_turisticos_2 = 10;
    float area2 = 4.30, pib2 = 3.67;
    float densidade_populacional2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    


    printf(" ====Bem-vindo ao jogo Super Trunfo!===\n");//Apresenta o jogo
    printf("==Escolha o primeiro atributo:==\n"); 
    printf("A. População\n");
    printf("B. Pontos Turísticos\n");
    printf("C. Área\n");
    printf("D. PIB\n");
    printf("E. Densidade Populacional\n");
    printf("F. PIB per Capita\n");

    printf("==Escolha a comparação:==\n");
    scanf(" %c", &primeiroAtributo);


    //usando switch para o menu 
    switch (primeiroAtributo) 
    {
    case 'A':
    case 'a':
        printf("Você escolheu População.\n");
        //se carta 1 for maior que carta2 soma 1 resultando em ganho(exeto no atributo densidade populacional, sendo que menor ganha)
        if (populacao1 > populacao2) 
        resultado1 = 1;
        //se carta 1 for menos que carta2 soma -1 resultando em perda (exeto no atributo densidade populacional, sendo que maior perde)
    else if (populacao1 < populacao2)
        resultado1 = -1;
        //caso ambas cartas tenham o mesmo valor atribuído gera empate
        //essas logicas se repetem em todas as cases
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
        if (densidade_populacional1 < densidade_populacional2)//lembrando que em densidade o menor ganha
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

    if(primeiroAtributo == segundoAtributo)//segurando que o o usuario não escolha dois mesmos atributos para jogar
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
//mostando resultados possiveis da rodada das rodadas 
if (resultado1 == 1 && resultado2 == 1) {
    printf("Parabéns! Você venceu ambas as rodadas!\n");
    printf("Resultado:\n");
    printf("Vencedor!\n");
} 
else if (resultado1 == -1 && resultado2 == -1) {
    printf("Que pena! Você perdeu ambas as rodadas.\n");
    printf("Resultado:\n");
    printf("Derrota!\n");
} 
else if (resultado1 == 0 && resultado2 == 0) {
    printf("Empate nas duas rodadas!\n");
    printf("Resultado:\n");
    printf("Empate!\n");
} 
else if ((resultado1 == 1 && resultado2 == -1) || (resultado1 == -1 && resultado2 == 1)) {
    printf("Você venceu uma rodada e perdeu a outra.\n");
    printf("Resultado:\n");
    printf("Empate!\n");
} 
else if ((resultado1 == 0 && resultado2 == 1) || (resultado1 == 1 && resultado2 == 0)) {
    printf("Você venceu uma rodada e empatou a outra.\n");
    printf("Resultado:\n");
    printf("Vencedor!\n");
} 
else if ((resultado1 == 0 && resultado2 == -1) || (resultado1 == -1 && resultado2 == 0)) {
    printf("Uma rodada empatou e a outra você perdeu.\n");
    printf("Resultado:\n");
    printf("Derrota\n");
}

    /*usando 1, -1 e 0 atribuídos na variavel resultado1 e resultado2 para definir vencedor, perdedor e empate
       resultado1 = 1, resultado2 1 = vitoria
       resultado1 -1, resultado2 -1 = derrota
       resultado1 0, resultado2 0 = empate
       resultado1 1 ou -1, resultado2 -1 ou 1= empate
       resultado1 1 ou 0, resultado2 o ou 1 = vitoria
       resultao1 0 ou -1, resultado2 -1 ou 0 = derrota
    */

    return 0;
}
