#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    FILE *arquivo;
    char primeiro_nome[100];
    char segundo_nome[100];
    char nome;

    // abrindo arquivo
    arquivo = fopen("nome.txt", "w");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }
    printf("\nDigite o seu primerio nome: ");
    fgets(primeiro_nome, 100, stdin);

    printf("\nDigite o seu segundo nome: ");
    fgets(segundo_nome, 100, stdin);

    // Grava a string, caractere a caractere
    fprintf(arquivo, "%s %s", primeiro_nome, segundo_nome);

    // fechando arquivo
    fclose(arquivo);

    // Abrindo arquivo para leitura:
    arquivo = fopen("nome.txt", "r");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    // Lendo os nomes do arquivo
    fgets(primeiro_nome, sizeof(primeiro_nome), arquivo);
    fgets(segundo_nome, sizeof(segundo_nome), arquivo);

    // fecha o arquivo
    fclose(arquivo);

    printf("Primeiro nome: %s\n", primeiro_nome);
    printf("Segundo nome: %s\n", segundo_nome);

    //---------------------------------------------------------------

    // Lendo cada caracter de cada vez

    arquivo = fopen("nome.txt", "r");
    if (!arquivo)
    {
        printf("Erro na abertura do arquivo.");
        exit(0);
    }

    while((nome = fgetc(arquivo)) != EOF){
        printf("\n%c", nome);
    }

    return 0;
}

/* Resumo: 
[Grupo 1: Ler e escrever um caractere por vez (funções fputc() e fgetc())]
FILE *arquivo = fopen("arquivo.txt", "w");
fputc('A', arquivo);  // Escreve o caractere 'A' no arquivo
fclose(arquivo);

FILE *arquivo = fopen("arquivo.txt", "r");
char c = fgetc(arquivo);  // Lê um caractere do arquivo
printf("%c\n", c);  // Imprime o caractere lido
fclose(arquivo);

--------------------------------------------------------------------
[Grupo 2: Ler e escrever linha a linha (funções fputs() e fgets())]
FILE *arquivo = fopen("arquivo.txt", "w");
fputs("Olá, Mundo!\n", arquivo);  // Escreve a linha no arquivo
fclose(arquivo);

FILE *arquivo = fopen("arquivo.txt", "r");
char linha[100];
fgets(linha, sizeof(linha), arquivo);  // Lê uma linha do arquivo
printf("%s", linha);  // Imprime a linha lida
fclose(arquivo);

---------------------------------------------------------------------
Grupo 3: Ler e escrever dados formatados (funções fprintf() e fscanf())
FILE *arquivo = fopen("arquivo.txt", "w");
int idade = 25;
float altura = 1.75;
fprintf(arquivo, "Idade: %d, Altura: %.2f\n", idade, altura);  // Escreve dados formatados
fclose(arquivo);

FILE *arquivo = fopen("arquivo.txt", "r");
int idade;
float altura;
fscanf(arquivo, "Idade: %d, Altura: %f\n", &idade, &altura);  // Lê dados formatados do arquivo
printf("Idade: %d, Altura: %.2f\n", idade, altura);
fclose(arquivo);




"r": Somente leitura (arquivo deve existir).
"r+": Leitura e escrita (arquivo deve existir).
"w": Somente escrita (cria ou sobrescreve arquivo).
"w+": Leitura e escrita (cria ou sobrescreve arquivo).
"a": Adiciona conteúdo ao final (cria o arquivo se não existir).
"a+": Leitura e escrita, com adição ao final (cria o arquivo se não existir).*/

