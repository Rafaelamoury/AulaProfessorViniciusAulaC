//1. Escreva um programa que:
//Leia um inteiro n . Imprima todos os números de n até 1 (contagem
//regressiva).

#include <stdio.h>
int main(){

    int num;


    printf("Digite o numero: ");
    scanf("%d", &num);

    for(int i = num; i >= 1; i--){
        printf("%d\n", i);
    }

    return 0;
}