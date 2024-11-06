//Inverta os Dígitos de um Número se o número for 123, o resultado deve ser 321

int inverteNumero(int n){
    if(n == 0){
        return 0;
    }

    // Imprime o último dígito
    printf("%d", n % 10);

    // Chamada recursiva com o número sem o último dígito
    inverteNumero(n / 10);

}

int main(void)
{

    int n;

    printf("Digite ate que numero deseja inverter ");
    scanf("%d", &n);

    inverteNumero(n);

    return 0;
}