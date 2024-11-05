/* Escreva uma função que verifique se uma string é um palíndromo (lê-se igual de trás para frente).
Exemplo: palindromo("arara") deve retornar true.*/

#include <stdio.h>
#include <string.h> // Necessário para usar strcspn
#include <ctype.h>

int verificaPalidromo(char palavra[50], int tamanho)
{
    char invert[50];
    char palavra_sem_espaco[50];

    int j = 0;

    // Tirando os espaços
    for (int i = 0; i < tamanho; i++)
    {

        if (isalpha(palavra[i]))
        {
            palavra_sem_espaco[j++] = tolower(palavra[i]);
        }
    }

    palavra_sem_espaco[j] = '\0'; // Terminador nulo

    int tamanho2 = strlen(palavra_sem_espaco);

    // Invertendo a palavra sem espaço
    for (int i = tamanho2 - 1, n = 0; i >= 0; i--, n++)
    {

        invert[n] = palavra_sem_espaco[i];
    }

     invert[tamanho2] = '\0'; // Terminador nulo para a string invertida

    if (strcmp(palavra_sem_espaco, invert) == 0)
    {
        return 1; // Verdadeiro
    }
    else
    {
        return 0; // Falso
    }
}

int main(void)
{
    char palavra[50];

    printf("\n Escreva uma palavra: ");
    fgets(palavra, 50, stdin);

    palavra[strcspn(palavra, "\n")] = '\0'; // Removendo a quebra de linha

    int tamanho = strlen(palavra);

    if (verificaPalidromo(palavra, tamanho))
    {
        printf("\n Eh um palidromo");
    }
    else
    {
        printf("\n NAO eh um palidromo");
    }

    return 0;
}