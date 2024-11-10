#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    FILE *arquivo;
    int contador = 0;
    char caractere;

    //Abrindo arquivo texto.txt no modo de escrita 
    arquivo = fopen("arquivo3.txt","w");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    
    
}