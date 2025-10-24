#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int resultado1, resultado2;
int populacao = 62000000;
float area = 1480.886;
float densidade = 1 / 41886.83 ;
char Estado;
char Codigo[20];
char Cidade[20];
float PIB = 190.84;
int turismo = 50;
float per = 324879.50;
float super = (float) populacao + area + PIB + per + densidade;
int populacao2 = 94100000;
float area2 = 5640.830;
float PIB2 = 230.65;
float densidade2 = 1 / 16681.94;
float per2 = 407977.47;
int turismo2 = 63;
float super2 = (float) populacao2 + area2 + PIB2 + per2 + densidade2;
int primeiroAtributo, segundoAtributo;

printf("Super Trunfo \n");

printf("\n");


printf("Carta 1 \n");

printf("O Estado é: Ceará \n");
printf("O Código é: C01 \n");
printf("A Cidade é: Fortaleza \n");
printf("A População é: 62000000 \n");
printf("A Área em km² é: 1480.886 Km² \n");
printf("O PIB é: 190.84 Bilhões de reais \n");
printf("O Número de Pontos Turistícos é: 50 \n");
printf("A Densidade Populacional é:  0.000024 hab/km² \n");
printf("O PIB per Capita é: 324879.50 reais \n");
printf("O Super Poder é: 62326552\n");

printf("\n");


printf("Carta 2 \n");
printf("O Estado é: Bahia \n");
printf("O Código é: B02 \n");
printf("A Cidade é: Salvador \n");
printf("A População é: 94100000 \n");
printf("A Área em km² é: 5640.830 Km² \n");
printf("O PIB é: 230.65 Bilhões de reais \n");
printf("O Número de Pontos Turistícos é: 63 \n");
printf("A Densidade Populacional é: 0.000060 hab/km² \n");
printf("O PIB per Capita é: 407977.47 reais \n");
printf("O Super Poder é: 94513848 \n");

printf("\n");


printf("Super Trunfo \n");
printf("Bem-Vindo ao jogo!\n");
printf("Escolha o primeiro atributo.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Turismo\n");
printf("5. Densidade\n");
printf("6. PIB per Capita\n");
printf("7. Super poder\n");

printf("Escolha a comparação: ");
scanf("%d", &primeiroAtributo);

switch (primeiroAtributo)
{
case '1':
         printf("Você escolheu a opção População!\n");
         resultado1 = populacao > populacao2 ? 1 : 0;
    break;

case '2':
         printf("Você escolheu a opção Área em km²!\n");
         resultado1 = area > area2 ? 1 : 0;
    break;

case '3':
         printf("Você escolheu a opção PIB!\n");
         resultado1 = PIB > PIB2 ? 1 : 0;
    break;
     
case '4':
         printf("Você escolheu a opção Número de pontos Turistícos!\n");
         resultado1 = turismo > turismo2 ? 1 : 0;
    break;

case '5':
         printf("Você escolheu a opção Densidade Populacional!\n");
         resultado1 = densidade < densidade2 ? 1 : 0;
    break;

case '6':
         printf("Você escolheu a opção Pib per capita!\n");
         resultado1 = per > per2 ? 1 : 0;
    break;
    
case '7':
         printf("Você escolheu a opção Super poder!\n");
         resultado1 = super > super2 ? 1 : 0;
    break;
     default:
            printf("Opção Inválida\n");
    break;
}




printf("Escolha o segundo atributo.\n");
printf("Você deve escolher um atributo diferente do primeiro.\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Turismo\n");
printf("5. Densidade\n");
printf("6. PIB per Capita\n");
printf("7. Super poder\n");

printf("Escolha a comparação: ");
scanf("%d", &segundoAtributo);

if (primeiroAtributo == segundoAtributo)
    { 
      printf ("Você escolheu o mesmo atributo!");
    } else {

switch (segundoAtributo)
    {
case '1':
         printf("Você escolheu a opção População!\n");
         resultado2 = populacao > populacao2 ? 1 : 0;
    break;

case '2':
         printf("Você escolheu a opção Área em km²!\n");
         resultado2 = area > area2 ? 1 : 0;
    break;

case '3':
         printf("Você escolheu a opção PIB!\n");
         resultado2 = PIB > PIB2 ? 1 : 0;
    break;
 
case '4':
         printf("Você escolheu a opção Número de pontos Turistícos!\n");
         resultado2 = turismo > turismo2 ? 1 : 0;
    break;

case '5':
         printf("Você escolheu a opção Densidade Populacional!\n");
         resultado2 = densidade < densidade2 ? 1 : 0;
    break;

case '6':
         printf("Você escolheu a opção Pib per capita!\n");
         resultado2 = per > per2 ? 1 : 0;
    break;
    
case '7':
         printf("Você escolheu a opção Super poder!\n");
         resultado2 = super > super2 ? 1 : 0;
    break; 
    }

    





