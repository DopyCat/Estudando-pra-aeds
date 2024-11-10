#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    FILE *arquivo;
    char palavra;
    //Abrindo arquivo
    arquivo = fopen("arquivo1.txt", "w");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }
    //Escrevendo no arquivo palavra por palava 
     printf("Digite uma palavra: \n");
    for(int i = 0; i< 5; i++){
        scanf("%c", &palavra);  // Lê a palavra
        fputc(palavra, arquivo);

    }
    fclose(arquivo);
    
    //Lendo arquivo palavra por palava 
    arquivo = fopen("arquivo1.txt", "r");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    while ((palavra = fgetc(arquivo)) != EOF)
    {
        printf("%c", palavra);
    }
    fclose(arquivo);
    return 0;
}