/*2. Escreva um programa que preencha um vetor de tamanho 100 com os 100 primeiros números
naturais que não são múltiplos de 6 e que não terminam com 6.
Atenção: todas as 100 posições do vetor devem ser preenchidas. */



#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int vetor[100];
    int numero = 0;
    int posi = 0;
    
    for(int i = 0; i<100;){

        if((numero % 6) != 0 && (numero % 10) != 6){
            vetor[i] = numero;
            printf("%d\n", vetor[i]);
            i++;

        }

        numero++;

    }
    return 0;
}