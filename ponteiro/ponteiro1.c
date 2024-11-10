/*Escreva um programa que leia do teclado uma string S. Gere uma string I, com os caracteres
em ordem contrária.
Ex.: S = “Abacate”, I = “etacabA”*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{

    char palavra[50];
    char invertido[50];

    printf("\nDigite uma palavra: ");
    fgets(palavra,50,stdin);

    palavra[strcspn(palavra, "\n")] = '\0'; // Isso substitui o '\n' por '\0' -> nulo

    int tamanho = strlen(palavra);

    for(int i = 0 ,j = tamanho-1; i< tamanho; i++, j--){
        invertido[i] = palavra[j];
        printf("%c",invertido[i]);
    }

    return 0;
}