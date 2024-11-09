/* 5. Implemente um procedimento preencheValores que preencha um vetor X de 10 elementos. Na
sequência, faça um procedimento copiaNegativos que receba um vetor preenchido, teste e copie
todos os valores negativos deste vetor para um novo vetor, sem deixar elementos vazios entre os
valores copiados. O vetor contendo números negativos deve conter até 10 elementos - após o
último número negativo (caso não existam 10 número negativos) o vetor deve conter o número
0. Faça um programa (main) que acione os procedimentos e imprima o vetor de números
negativos, sem imprimir o valor zero. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

void preencheValores(int X[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o %d numero: ", i);
        scanf("%d", &X[i]);
    }
}

void copiaNegativos(int X[10], int negat[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (X[i] < 0)
        {
            negat[i] = X[i];
        }
        else
        {
            negat[i] = 0;
        }
    }
}

int main(void)
{
    int X[10];
    int negat[10];

    preencheValores(X);
    copiaNegativos(X, negat);

    for(int i = 0; i < 10; i++){
        if(negat[i] != 0 ){
            printf("\nPosicao[%d] = %d", i, negat[i]);
        }
    }

    return 0;
}