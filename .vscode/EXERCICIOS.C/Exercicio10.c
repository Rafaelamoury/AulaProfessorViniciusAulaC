//Escreva um programa que:
//Leia 10 notas (0 a 10).
//Calcule e imprima a média, a maior e a menor nota.

#include <stdio.h>
int main(){
    
    float nota, soma = 0, media;
    float maior = 0, menor = 10;

    for(int i = 1; i <= 10; i++){
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        if(nota < 0 || nota > 10){
            printf("Nota invalida. Digite uma nota entre 0 e 10.\n");
            i--; // Decrementa o contador para repetir a entrada da nota
            continue;
        }

        soma += nota;

        if(nota > maior){
            maior = nota;
        }
        if(nota < menor){
            menor = nota;
        }
    }

    media = soma / 10;

    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}