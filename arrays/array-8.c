/*8. Escreva um vetor de inteiros A com 10 elementos. Em seguida, leia um vetor de inteiros B,
também com 10 elementos. Durante a leitura do vetor B, se o elemento na posição i for igual ao
elemento na mesma posição do vetor A, rejeitar o valor e solicitar a entrada de um novo valor. A
rejeição deve ocorrer até que o valor seja digitado um valor válido. Após a leitura dos vetores A e
B, criar um algoritmo que calcule e imprima a diferença entre cada um dos elementos.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int A[10];
    int B[10];
    int diferen[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o %d numero do vetor A: ", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 10;)
    {
        printf("\nDigite o %d numero do vetor B: ", i);
        scanf("%d", &B[i]);

        if (B[i] == A[i])
        {
            printf("\nValor invalido");
        }
        else
        {
            i++;
        }
    }

    for(int i = 0; i< 10; i++){

        diferen[i] = A[i] - B[i];
        printf("\nPosicao[%d] = %d", diferen[i]);

    }
    return 0;
}