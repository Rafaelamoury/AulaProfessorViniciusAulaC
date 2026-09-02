//Escreva um programa que:
//Leia inteiros até que o usuário digite 0.
//Conte e imprima quantos números pares e ímpares foram informados
//(desconsiderando o 0).

#include <stdio.h>
int main(){

    int num;
    int pares = 0;
    int impares = 0;

    do{
        printf("Digite um numero : (0 para sair) ");
        scanf("%d", &num);

        if(num != 0){
            if(num % 2 == 0){
                pares++;
            }else{
                impares++;
            }
        }
    }while(num != 0);

    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);


    return 0;
}