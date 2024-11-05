/* Escreva uma função iterativa em C que faça o fatorial de n*/

#include <stdio.h>

void invertePalavra(char palavra[50], int inicio, int fim){

    if(inicio >= fim ){
        return;
    }

    char temp = palavra[inicio];

    palavra[inicio] = palavra[fim];

    palavra[fim] = temp;

    // Chamada recursiva para a próxima posição
    invertePalavra(palavra, inicio + 1, fim - 1);
}

int main(void)
{
    
    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra,50,stdin);

    int tamanho = (strlen(palavra)) - 1; //Tirando o /n

    invertePalavra(palavra,0,tamanho-1);

    printf("\nA palavra invertida eh: %s", palavra);

    return 0;
}