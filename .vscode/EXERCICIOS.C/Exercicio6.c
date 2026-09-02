//EXERCÍCIO 2.
//1. Escreva um programa que leia 3 notas de um aluno e a média das notas dos
//exercícios realizados por ele. Calcular a média de aproveitamento, usando a
//fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito
//de acordo com a tabela:
//maior ou igual a 9 A
//maior ou igual a 7.5 e menor que 9 B
//maior ou igual a 6 e menor que 7.5 C
//maior ou igual a 4 e menor que 6 D
//menor que 4 E

#include <stdio.h>
// float calculo_ma(float nota1, float nota2, float nota3){
//         float me(nota1 + nota2 + nota3) /3

//     return 0;
// }



int main(){ 
    float nota1, nota2, nota3; 

    float ma =0, me =0;


    printf("Digite a nota1: ");
    scanf("%f", &nota1);

    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    printf("Digite a nota3: ");
    scanf("%f", &nota3);

    me = (nota1 + nota2 + nota3) /3;

    ma = (nota1 + nota2*2 + nota3*3 + me) / 7;
        printf("MA: %.2f\n", ma);

    if (ma >= 9){
        printf("Conceita A:");
    }
    else if(ma >= 7.5 && ma < 9){
        printf("Conceito B:");
    }
    else if(ma >= 6 && ma < 7.5){
        printf("Conceito C:");
    }
    else if(ma >= 4 && ma < 6){
        printf("Conceito D:");
    }
    else{
        printf("Conceito E:");
    }

return 0;

}