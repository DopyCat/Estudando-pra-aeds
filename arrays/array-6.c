/*6. Escreva um programa que preencha e imprima na tela um vetor de tamanho 50, cujos valores
são dados pela seguinte fórmula:
𝑝𝑜𝑠 = (i+ (3 × 𝑖) )% (i+ 1)
onde i corresponde à posição do elemento no vetor.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int vetor[50];

    for (int i = 0; i < 50; i++)
    {
        vetor[i] = (i + (3 * i)) % (i + 1);
        printf("\nPosicao[%d] = %d", i, vetor[i]);
    }
    return 0;
}