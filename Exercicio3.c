//Exercício 3: Cálculo de Imposto de Renda Retido na Fonte (IRRF) 
//Escreva um programa que receba o salário bruto de um funcionário. O programa deve calcular o 
//imposto de renda devido com base nas seguintes faixas progressivas: 
//• Até R$ 2.000,00: Isento (0% de imposto). 
//• De R$ 2.001,00 a R$ 4.000,00: 15% sobre a parcela que exceder R$ 2.000,00. 
//• Acima de R$ 4.000,00: 22.5% sobre a parcela que exceder R$ 4.000,00 + o imposto fixo da faixa anterior (R$ 300,00). 
//Ao final, exiba de forma organizada: o salário bruto, o valor exato do imposto retido e o salário líquido resultante. 


#include <stdio.h>
int main() {
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o salario bruto do funcionario: ");
    scanf("%f", &salarioBruto);

    if (salarioBruto < 0) {
        printf("Salario invalido.\n");
        return 1;
    }

    if (salarioBruto <= 2000.00) {
        imposto = 0.0;
    } else if (salarioBruto <= 4000.00) {
        imposto = (salarioBruto - 2000.00) * 0.15;
    } else {
        imposto = (salarioBruto - 4000.00) * 0.225 + 300.00;
    }

    salarioLiquido = salarioBruto - imposto;

    printf("\nSalario Bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto Retido: R$ %.2f\n", imposto);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}