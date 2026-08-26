#include <stdio.h>

int main(){
    int n,soma;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    soma = 0;
    for (int i=1;i<=n;i++){
        soma = soma + i;
    
    }
    printf("A soma de 1 a n eh igual a : %dn",soma);
    
    return 0; 
}