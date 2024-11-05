/* Escreva uma função iterativa em C que faça o fatorial de n*/

#include <stdio.h>

int main(void)
{

    int n;
    int fat = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        fat *= i;
    }


    printf("\nO fatorial de %d eh: %d", n, fat);

    return 0;
}