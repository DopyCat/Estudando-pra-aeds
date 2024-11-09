/*Escreva um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor, C, calculando C = A - B. Mostre na tela os dados do vetor C.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{

    int A[10];
    int B[10];
    int C[10];

    srand(time(0));

    for(int i = 0; i < 10; i++){
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }

    for(int i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
        printf("\nPosicao[%d] = %d", i, C[i]);
    }
    return 0;
}