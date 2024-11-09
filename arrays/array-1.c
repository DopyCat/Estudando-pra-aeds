/* 1. Escreva um programa para preencher um vetor com 20 vinte valores inteiros (os valores podem
ser lidos do teclado ou gerados automaticamente). Em seguida, o sistema deve solicitar ao
usuário um valor, que deve ser pesquisado no vetor. Imprima as posições do vetor que armazena
o valor informado.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int vetor[20];
    int n;

    //inicializa o gerador de números aleatórios com uma semente específica
    srand(time(0));
    
    for (int i = 0; i<20; i++){
        //gera um número pseudo-aleatório.
        vetor[i] = rand() % 100;
    }

    printf("Digite a posicao do vetor: \n");
    scanf("%d", &n);

    printf("-----------------------------\n");

    printf("O numero na posicao %d eh %d \n", n, vetor[n]);

    return 0;
}