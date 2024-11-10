#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    FILE * arquivo;
    int a = 2, b = 1;
    char frase[100];

    arquivo = fopen("arquivo2.txt", "w");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    printf("Escreva uma frase: ");
    fgets(frase,100,stdin);

    fputs("A frase eh: ", arquivo); // Primeiro escreve a parte fixa
    fputs(frase, arquivo);          // Agora escreve a frase digitada

    fclose(arquivo);

    arquivo = fopen("arquivo2.txt", "r");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }
    fgets(frase, 100, arquivo);  // Lê uma linha do arquivo
    printf("%s", frase);  // Imprime a linha lida

    fclose(arquivo);
    return 0;
}