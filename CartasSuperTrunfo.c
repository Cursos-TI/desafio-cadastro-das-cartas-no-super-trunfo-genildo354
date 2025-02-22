#include <stdio.h> 

int main(){

    char estado1, estado2;
    char carta1, carta2;
    char cidade, cidade2;
    float populacao1, populacao2;
    int ponto1, ponto2;
    float pib1, pib2;
    float area1, area2;
    
    printf("\n");
    
printf("                                                 DESAFIO CARTAS (SUPER TRUNFO)\n"); // EXIBIÇÃO DO DESAFIO

printf("\n ");

printf("\n(PRIMEIRA CARTA) \n");


// COLETA DE DADOS DA PRIMEIRA CARTA

printf("DIGITE O ESTADO: ");
scanf("%s", &estado1);

printf("DIGITE A CARTA: ");
scanf("%s", &carta1);

printf("DIGITE O NOME DA CIDADE: ");
scanf(" %20s", &cidade);

printf("DIGITE A POPULAÇÃO: ");
scanf("%20f",&populacao1);

printf("DIGITE O PIB: ");
scanf("%20f",pib1);

printf("QUAL A AREA EM KM²: ");
scanf("%20f",&area1);

printf("QUANTOS PONTOS TURÍSTICOS: ");
scanf("%d", &ponto1);

printf("\n ");


printf("\n(SEGUNDA CARTA) \n"); // COLETA DE DADOS DA SEGUNDA CARTA 

printf("DIGITE O ESTADO: ");
scanf("%s", &estado2);

printf("DIGITE A CARTA: ");
scanf("%s", &carta2);

printf("DIGITE O NOME DA CIDADE: ");
scanf("%20s", &cidade2);

printf("DIGITE A POPULAÇÃO: ");
scanf("%20f", &populacao2);

printf("DIGITE O PIB: ");
scanf("%20f", &pib2);

printf("QUAL A AREA EM KM²: ");
scanf("%20f", &area2);

printf("QUANTOS PONTOS TURÍSTICOS: ");
scanf("%d", &ponto2);


return 0;



}
