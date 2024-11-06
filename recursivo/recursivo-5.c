/* Escreva uma função recursiva que inverta uma palavra e verifique se ela é um palindromo*/

#include <stdio.h>

void invertePalavra(char palavra[50], int inicio, int fim)
{

    if (inicio >= fim)
    {
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
    fgets(palavra, 50, stdin);

    int tamanho = (strlen(palavra)) - 1; // Tirando o /n

    invertePalavra(palavra, 0, tamanho - 1);

    printf("\nA palavra invertida eh: %s", palavra);

    return 0;
}

/* Outra maneira: 

#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim) { // Condição de parada: chegamos no meio da palavra
        return 1;
    }
    if (palavra[inicio] != palavra[fim]) { // Se houver um caractere diferente, não é palíndromo
        return 0;
    }
    return ehPalindromo(palavra, inicio + 1, fim - 1); // Avança para o próximo par de caracteres
}

int main() {
    char palavra[50];
    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);
    
    palavra[strcspn(palavra, "\n")] = '\0'; // Remove o \n do final da palavra

    int tamanho = strlen(palavra);
    if (ehPalindromo(palavra, 0, tamanho - 1)) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }
    return 0;
}

*/
