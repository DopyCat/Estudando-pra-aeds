/* Crie uma função recursiva que calcule a soma dos  n primeiros números inteiros.
Exemplo: soma(5) deve retornar 15, pois 1+2+3+4+5=15.*/

#include <stdio.h>

int calculaSoma(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return n + calculaSoma(n - 1);
    }
}

int main(void)
{
    int n;

    printf("\nEscreva um numero: ");
    scanf("%d", &n);

    printf("\n A soma dos %d primerios numeros eh: %d", n, calculaSoma(n));

    return 0;
}