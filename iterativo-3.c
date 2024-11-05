/* Função que define elevar qualquer número x a uma potência inteira não negativa n no iterativo*//* Escreva uma função iterativa em C que faça o fatorial de n*/

#include <stdio.h>

int main(void)
{

    int n;
    int x;
    int pot = 1;

    printf("\nDigite um a base: ");
    scanf("%d", &x);

    printf("\nDigite um expoente: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        pot *= x;

    }

    printf("\n %d eleavado a %d eh = %d",x,n,pot);

    return 0;
}