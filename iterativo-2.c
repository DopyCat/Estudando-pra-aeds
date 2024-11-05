/* Escreva uma função iterativa em C chamada calculaFibonacci que, dado um número inteiro n,
retorne o valor do n-ésimo termo da sequência de Fibonacci.*/

#include <stdio.h>

int main(void)
{

    int n;
    int fibo = 0;

    printf("Digite ate que numero deseja fazer Fibonacci: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    if ( n == 0 ){
            fibo = 0;
        }

        if ( n == 1 ){
            fibo = 1;
        }

    for (int i = 2; i <= n; i++)
    {
            fibo = a + b;

            a = b;
            b = fibo;
    }

    printf("\nO %d numero de Fibonacci eh: %d", n, fibo);

    return 0;
}