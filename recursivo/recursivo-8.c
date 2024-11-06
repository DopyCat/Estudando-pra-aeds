int calculaRaiz(int n, int subtracoes, int contador)
{
    if (n <= 0)
    {
        return contador;
    }

    return calculaRaiz(n-subtracoes, subtracoes+2,contador + 1);

}

int main(void)
{

    int n, contador=0;
    int subtracoes =1;

    printf("Digite um numero que queria calcular a raiz: ");
    scanf("%d", &n);

    printf("%d",calculaRaiz(n,subtracoes,contador));

    return 0;
}