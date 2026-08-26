#include <stdio.h>

int calula_pa(int p,int r,int n){
    int termo_atual = p;
    for(int i = 1; i<=n; i++){
        printf("%d\n", termo_atual);
        termo_atual = termo_atual + r;
        }

return 0;
}

int calula_pg(int p,int r,int n){
    int termo_atual = p;
    for(int i = 1; i<=n; i++){
        printf("%d\n", termo_atual);
        termo_atual = termo_atual * r;
        }

return 0;
}
int main(){
//calcular a PA, onde o usuario vai entrar com:
//- primeiro termo da PA
//- razao da PA
//- quantidade de termos a ser calculados

int p,r,n;
int termo_atual;

//primeiro termo
printf("Entre com o primeiro termo da PA:");
scanf("%d",&p);

//Razao
printf("Entre com a razao da PA: ");
scanf("%d", &r);

//quantidade de termos
printf("Entre com as quantidades de termos a serem calculados: ");
scanf("%d", &n);
if (n <=0) {
    printf("Nao eh aceito valor negativo!\n");
    return -1;
}
else {
    calula_pa(p,r,n);
    printf("\n------\n");
    calula_pg(p,r,n);
    

}
return 0;


}