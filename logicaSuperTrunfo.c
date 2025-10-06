#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
int Opção;
int populacao = 62000000;
float area = 1480.886;
float densidade = 1 / 41886.83 ;
char Estado;
char Codigo[20];
char Cidade[20];
float PIB = 190.84;
int Turismo = 50;
float per = 324879.50;
float super = (float) populacao + area + PIB + per + densidade;
int populacao2 = 94100000;
float area2 = 5640.830;
float PIB2 = 230.65;
float densidade2 = 1 / 16681.94;
float per2 = 407977.47;
int turismo2 = 63;
float super2 = (float) populacao2 + area2 + PIB2 + per2 + densidade2;

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
printf("A Densidade Populacional é: %f hab/km² \n", densidade);
printf("O PIB per Capita é: 324879.50 reais \n");
printf("O Super Poder é: %2.f \n", super);

printf("\n");


printf("Carta 2 \n");
printf("O Estado é: Bahia \n");
printf("O Código é: B02 \n");
printf("A Cidade é: Salvador \n");
printf("A População é: 94100000 \n");
printf("A Área em km² é: 5640.830 Km² \n");
printf("O PIB é: 230.65 Bilhões de reais \n");
printf("O Número de Pontos Turistícos é: 63 \n");
printf("A Densidade Populacional é: %f hab/km² \n", densidade2);
printf("O PIB per Capita é: 407977.47 reais \n");
printf("O Super Poder é: %2.f \n", super2);

printf("\n");



printf("Super Trunfo \n");
printf("Escolha uma opção:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Turismo\n");
printf("5. Densidade\n");
printf("6. PIB per Capita\n");
printf("7. Densidade\n");
printf("8. Super poder\n");
printf("Escolha: ");
scanf("%d", & Opção);

switch (Opção)
{
case 1:
if (populacao > populacao2){
     printf("Carta 1 venceu\n");
} else if (populacao < populacao2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
}
break;

case 2:
if (area > area2){
    printf("Carta 1 venceu\n");
} else if (area < area2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
}
break;

case 3:
if (PIB > PIB2){
    printf("Carta 1 venceu\n");
} else if (PIB < PIB2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
}
break;

case 4:
if (Turismo > turismo2){
    printf("Carta 1 venceu\n");
} else if (Turismo < turismo2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
}
break;

case 5:
if (densidade < densidade2){
     printf("Carta 1 venceu\n");
} else if (densidade > densidade2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
}
break;

case 6:
if (per > per2){
    printf("Carta 1 venceu\n");
} else if (per < per2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
} 
break;

case 7:
if (super > super2){
    printf("Carta 1 venceu\n");
} else if (super < super2){
    printf("Carta 2 venceu\n");
} else {
    printf("Houve um empate!\n");
} 

}

return 0;
}



    
   

    



    
   

    

