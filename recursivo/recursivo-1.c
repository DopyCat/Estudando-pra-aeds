// Faça um fatorial utilizando a recursividade

int calculaFatorial(int n)
{
    // preciso de uma condição de parada
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * calculaFatorial(n - 1);
    }
}

#include <stdio.h>

int main(void)
{

    int n;

    printf("Digite um numero cuja voce deseja calcular o fatorial: ");
    scanf("%d", &n);

    printf("\nO fatorial de %d eh: %d", n, calculaFatorial(n));

    return 0;
}