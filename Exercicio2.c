#include <stdio.h>
//Desenvolva um programa que simule o saque de um caixa eletrônico. O usuário deve digitar um 
//valor inteiro a ser sacado. O programa deve calcular e exibir a menor quantidade possível de 
//notas de R$ 50, R$ 20, R$ 10 e R$ 5 necessárias para compor esse valor.  
//Exemplo: Se o usuário pedir R$ 85, o programa deve informar: 1 nota de R$ 50, 1 nota de R$ 20, 
//1 nota de R$ 10 e 1 nota de R$ 5. Caso o valor digitado não possa ser sacado com as notas 
//disponíveis (ex: R$ 3), exiba uma mensagem de erro. 

int main(){
    int saque;
    int notas50, notas20, notas10, notas5;

    printf("Digite o Valor do saque: ");
    scanf("%d", &saque);

    if (saque <= 0 || saque % 5 != 0) {
        printf("Valor invalido para saque.\n");
        return 1;
    }

    notas50 = saque / 50;
    saque = saque % 50; 
    notas20 = saque / 20;
    saque = saque % 20;
    notas10 = saque / 10;
    saque = saque % 10;
    notas5 = saque / 5;
    saque = saque % 5;



    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);

    


    return 0;
}