//Soma dos Dígitos de um Número se o número for 123, o resultado deve ser 1 + 2 + 3 = 6.

int calculaSoma( int n ){
    if(n == 0){
        return 0;
    }

    return (n % 10) + calculaSoma(n/10); //Como é inteiro, não vai pegar o numero depois da virgula
}


int main(void)
{

    int n;

    printf("Digite ate que numero deseja fazer a soma separada: ");
    scanf("%d", &n);

    printf("\nA soma dos numeros eh: %d", calculaSoma(n));

    return 0;
}