#include <stdio.h>


int main(){
    int contagem;

    printf("Digite o número: ");
    scanf("%d",&contagem );

    while(contagem>=1){
        printf("%d \n ",contagem);
        contagem=contagem -1;

    }