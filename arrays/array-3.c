/* 3. Escreva um algoritmo que:
(a) Crie um arranjo de 5 elementos inteiros e o preencha de números
(b) Procure a posição do menor elemento deste arranjo
(c) Troque o menor elemento com elemento da primeira posição
(d) Imprima os elementos do arranjo */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int a(int vetor[5]){
    for(int i = 0; i<5; i++){
    printf("\nDigite o %d numero: ",i);
    scanf("%d", &vetor[i]);
    }
}

int b(int vetor[5], int menor){
    for(int i = 0; i<5; i++){

    if(vetor[i] < menor){
        menor = vetor[i];
    }
    }
    printf("\nO menor numero eh:  %d", menor);
    return menor;
}

int c(int vetor[5], int menor){
    for(int i = 0; i<5; i++){
        int temp;
    if(vetor[i] == menor){
        temp = vetor[0];
        vetor[0] = menor;
        vetor[i] = temp;
    }
    }
}

int d(int vetor[5]){

    for(int i = 0; i<5; i++){
      printf("\nPosicao[%d] = %d", i, vetor[i]);
    }
}

int main(void)
{
    int vetor[5];
    int menor = INT_MAX;

    a(vetor);

    
    
    b(vetor,menor);

    

    c(vetor, menor);

    
    d(vetor);

    return 0;
}