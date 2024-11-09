/*9. Escreva um programa que armazene as idades dos alunos que estão presentes em uma aula da
disciplina de Algoritmos e Estrutura de Dados I. Considere que o vetor possa conter até 60
registros. Sabe-se que, em uma dada aula, alguns alunos podem ter faltado. Com isso, leia
elementos até que seja digitado um valor 0 ou enquanto a quantidade de alunos for inferior à
capacidade do vetor. Imprima:
• Idade de todos os alunos presentes na aula (não imprimir idades não cadastradas).
• Idade de todos os alunos com idade superior à média.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    int alunos[60];
    int idade = 0;
    int presentes = 0;
    float media = 0;
    int soma_idade = 0;

    do{
        printf("Digite a idade do aluno %d: ", presentes);
        scanf ("%d", &idade);

        alunos[presentes] = idade;
        
        presentes++;
        
    }while(presentes < 60 && idade != 0);

    printf("\n-----------------------");

    for(int i = 0; i < presentes; i++){
        printf("\nAluno[%d], IDADE: %d", i, alunos[i]);
        soma_idade += alunos[i];
    }

    media = (soma_idade-1)*1.0/presentes;

     printf("\n-----------------------");

     for(int i = 0; i < presentes; i++){
        if(alunos[i] > media){
        printf("\nAluno[%d], IDADE ACIMA DA MEDIA: %d", i, alunos[i]);
        }
    }

    return 0;
}