#include <stdio.h>
int main() {  //Metodo Principal C
    float nota1;
    float nota2;
    float media;
    // Entra com a nota 1
    printf("Digite a nota 1:");
    scanf("%f", &nota1); // & é o ponteiro que aponta para a variavel

    // Entra com nota 2
    printf("Digite a nota 2:");
    scanf("%f", &nota2); // & é o ponteiro que aponta para a variavel

    media = (nota1 + nota2) /2;

    
    printf("Media eh: %.2f. A nota1: %.2f. nota2: %.2f", media, nota1, nota2);
    return 0;  // Para mostrar se de fato rodou correto

}

// como salvar e compilar o codigo: primeiro CTRL + S, depois no terminal usar (gcc + nome do arquivo + -o + nome do arquivo que vc criou.)
// depois executar .\+nome do arquivo que acabou de fazer anterior.
// Não colar acento e caracteres especias.
// Sempre identificar o tipo de variavel antes de começar.
// Toda linha o padrâo é terminar com ;
// quando for int usar %d, e quando for float %f.
// scanf é a entrada do teclado, que vai mascara a varial.
// como ajustar no float a questão da virgula e não ter muitos zeros.
// (int) utilizado para quantidades de pessoas (números inteiros)
// (double) preços de produto (reais com maior precisão)
// (char) inicial de nome (um caractere)
// (double) média de notas 
// (float) números reais