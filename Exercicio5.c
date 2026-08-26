//Exercício 5: Conversor de Tempo Complexo 
//Crie um programa que leia um valor inteiro correspondente a uma quantidade total de segundos. 
//O programa deve realizar as conversões necessárias e exibir essa quantidade exata fragmentada 
//no padrão: Semanas, Dias, Horas, Minutos e Segundos. 
//Exemplo: Se o usuário digitar um valor alto de segundos, o sistema deve dizer exatamente 
//quantas semanas inteiras cabem ali, quantos dias restaram, quantas horas, minutos e, por fim, os 
//segundos restantes. 

#include <stdio.h>
int main(){
    int totalSegundos;
    int semanas, dias, horas, minutos, segundos;

    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &totalSegundos);

    semanas = totalSegundos / (7 * 24 * 60 * 60);
    totalSegundos %= (7 * 24 * 60 * 60);

    dias = totalSegundos / (24 * 60 * 60);
    totalSegundos %= (24 * 60 * 60);

    horas = totalSegundos / (60 * 60);
    totalSegundos %= (60 * 60);

    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;

    printf("Resultado: %d semanas, %d dias, %d horas, %d minutos e %d segundos.\n", semanas, dias, horas, minutos, segundos);

    return 0;
}