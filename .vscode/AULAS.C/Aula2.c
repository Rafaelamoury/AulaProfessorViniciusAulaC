// Elabore um algoritimo que leia uma tempertaura em celsius e converta para fahrenheit.
// Formula: Auto: F = (C * 9 / 5) + 32

#include <stdio.h>
int main() {  //Entrada das variaveis
    float temC;
    float tempF;


    printf("Digite numero celsius:");// chamar os dados que vai precisar 
    scanf("%f", &temC );
// fazer o calculo sempre depois de receber a variavel
// calculo da variavel
    tempF = (temC * 9 / 5) + 32;

    printf("A Tempertaura em Fahrenheit e: %.2f\n", tempF);//não colocar acento ou caracter entre aspas(esse N é para pular a linha)
    return 0;



   

    


}