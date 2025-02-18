#include <stdio.h> 

int main(){

    char estado1[10] = "A";
    char estado2[10] = "B";
    char carta1[10] = "A01";
    char carta2[10] = "B02";
    char cidade1[50] ="SÃO PAULO";
    char cidade2[50]="RIO DE JANEIRO";
    int populacao1= 11451999;
    int populacao2=6729894;
    int ponto1=50;
    int ponto2=30;
    float pib1=699.28;
    float pib2= 300.50;
    float area1= 1521;
    float area2 = 1200;
    

printf("                                                 DESAFIO CARTAS (SUPER TRUNFO)\n");

printf("\n --------------------------------");

printf("\n(PRIMEIRA CARTA) \n");



printf("ESTADO: %s\n", estado1);
printf("CARTA: %s\n",carta1);
printf("CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %d\n", populacao1);
printf("AREAM EM KM²: %3.f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", ponto1);


printf("\n(SEGUNDA CARTA) \n");

printf("ESTADO: %s\n", estado2);
printf("CARTA: %s\n",carta2);
printf("CIDADE: %s\n", cidade2);
printf("POPULAÇÃO: %d\n", populacao2);
printf("AREAM EM KM²: %3.f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", ponto2);

}