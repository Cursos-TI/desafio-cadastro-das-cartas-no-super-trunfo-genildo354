#include <stdio.h> 

int main(){

    // variaveis 

    char estado1[10], estado2[10];
    char carta1[10], carta2[10];
    char cidade1[20];
    char cidade2[20];
    int populacao1, populacao2;
    int ponto1, ponto2;
    float pib1, pib2;
    float area1, area2;
    float densidade1, densidade2, percapita1, percapita2;
    float poder;

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
scanf("%s", &cidade1);

printf("DIGITE A POPULAÇÃO: ");
scanf("%d", &populacao1);

printf("DIGITE O PIB: ");
scanf("%f",&pib1);

printf("QUAL A AREA EM KM²: ");
scanf("%f",&area1);

printf("QUANTOS PONTOS TURÍSTICOS: ");
scanf("%d", &ponto1);

 
// area de cálculos 

float Densidade1= populacao1 / area1;
printf("DENSIDADE POPULACIONAL: %1.2f\n", Densidade1);

float pibPercapta1= pib1 / populacao1;
printf("PIB PER CAPITA: %2f\n", pibPercapta1);


printf("\n ");

printf("\n(SEGUNDA CARTA) \n"); // COLETA DE DADOS DA SEGUNDA CARTA 

printf("DIGITE O ESTADO: ");
scanf("%s", &estado2);

printf("DIGITE A CARTA: ");
scanf("%s", &carta2);

printf("DIGITE O NOME DA CIDADE: ");
scanf("%s", cidade2);

printf("DIGITE A POPULAÇÃO: ");
scanf("%d", &populacao2);

printf("DIGITE O PIB: ");
scanf("%20f", &pib2);

printf("QUAL A AREA EM KM²: ");
scanf("%20f", &area2);

printf("QUANTOS PONTOS TURÍSTICOS: ");
scanf("%d", &ponto2);

// coleta de reultado das cartas
printf("_________________________________________________________________________________\n");
printf("( RESULTADO DA PRIMEIRA CARTA)\n");
printf("_________________________________________________________________________________\n");

printf("\n");

printf("Estado: %s\n",estado1);

printf("Código da carta: %s\n", carta1);

printf("Nome da cidade: %s\n", cidade1);

printf("A população da cidadade é: %d Mihões\n", populacao1);

printf("A área da cidade é de: %.2f Km2\n", area1);

printf("O PIB da cidade é de:  %.2f bilhões\n", pib1);

printf("Número de pontos turísticos: %d\n", ponto1);

densidade1 = populacao1 / area1;

printf("A densidade popupalional é: %.2f\n", Densidade1);

percapita1 = pib1 / populacao1;

printf("A renda percapita é: %f\n", percapita1);


printf("_________________________________________________________________________________\n");
printf("( RESULTADO DA SEGUNDA CARTA)\n");
printf("_________________________________________________________________________________\n");

printf("\n");

printf("Estado: %s\n",estado2);

printf("Código da carta: %s\n", carta2);

printf("Nome da cidade: %s\n", cidade2);

printf("A população da cidadade é: %d Milhões\n", populacao2);

printf("A área da cidade é de: %.2f Km2\n", area2);

printf("O PIB da cidade é de:  %.2f bilhões\n", pib2);

printf("Total de pontos turísticos: %d\n", ponto2);

densidade2 = populacao2 / area2;

printf("A densidade popupalional é: %.2f\n", densidade2);

percapita2 = pib2 / populacao2;

printf("A renda percapita é: %f\n", percapita2);

poder = populacao2 + area2 + densidade2 + percapita2 + pib1;

printf("Super Poder: %.2f\n", poder);



return 0;



}