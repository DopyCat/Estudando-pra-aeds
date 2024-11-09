/*7. Escreva um programa que leia da entrada padrão 5 números reais, que devem ser armazenados
em um arranjo. Em seguida, gere outro arranjo, cujos valores correspondem ao dobro dos
respectivos elementos do primeiro arranjo.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    float vetor[5]; 
    float dobro[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite o %d numero: ", i);
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        dobro[i] = vetor[i] * 2;
        printf("\nPosicao[%d] = %f", i, dobro[i]);
    }

    return 0;
}