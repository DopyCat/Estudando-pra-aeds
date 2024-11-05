/* Escreva uma função recursiva em C chamada calculaFibonacci que, dado um número inteiro n,
retorne o valor do n-ésimo termo da sequência de Fibonacci.*/

int calculaFibonacci(int n)
{
    // preciso de uma condição de parada
    if (n < 2)
    {
        return (n);
    }
    else
    {
        return calculaFibonacci(n - 1) + calculaFibonacci(n - 2);
    }
}

#include <stdio.h>

int main(void)
{

    int n;

    printf("Digite ate que numero deseja fazer Fibonacci: ");
    scanf("%d", &n);

    printf("\nO %d numero de Fibonacci eh: %d", n, calculaFibonacci(n));

    return 0;
}