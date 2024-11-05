/* Função que define elevar qualquer número x a uma potência inteira não negativa n */

int calculaPotencia(int x, int n)
{
    // preciso de uma condição de parada
    if( n == 0){
        return n;
    } else {
        return x * calculaPotencia(x, n-1);
    }
}

#include <stdio.h>

int main(void)
{
    int x; 
    int n; 

    printf("Digite uma base: ");
    scanf("%d", &x);

    printf("Digite um expoente: ");
    scanf("%d", &n);


    printf("\n %d elevado a %d eh: %d", x, n, calculaPotencia(x,n));

    return 0;
}