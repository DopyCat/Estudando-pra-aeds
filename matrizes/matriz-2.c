/* esenvolva um programa em C que leia uma matriz de 5x4 contendo as seguintes
informações sobre 5 alunos de uma disciplina:
• Primeira coluna: números de matrícula;
• Segunda coluna: média das provas;
• Terceira coluna: média dos trabalhos;
A quarta coluna é composta pela nota final de cada aluno e deve ser calculada através da
soma da média das provas com a média dos trabalhos. Por fim, imprima a matrícula do
aluno com a maior nota final e a média aritmética das notas do 5 alunos */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int main(void)
{
    float matriz[5][4];
    float media_nota = 0; 
    float soma_notas_finais = 0;
    float maior_nota = INT_MIN;
    float matricula_maior_nota;

    for(int i  = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("\nAluno[%d] coluna [%d]: ", i, j);
            scanf("%f", &matriz[i][j]);

            // Agora calcula a Nota Final e armazena na coluna 3
            matriz[i][3] = matriz[i][1] + matriz[i][2]; // Nota Final = média provas + média trabalhos
        
        }

         //Pegando a menor nota:
            if(matriz[i][3] > maior_nota){
                maior_nota = matriz[i][3];
                matricula_maior_nota = matriz[i][0]; // Agora pegamos a matrícula real
            }
            
        //Calculando a soma das notas
            soma_notas_finais += matriz[i][3];
    }

    for(int i = 0; i<5; i++){
         //Pegando a menor nota:
            if(matriz[i][3] > maior_nota){
                maior_nota = matriz[i][3];
                matricula_maior_nota = matriz[i][0]; // Agora pegamos a matrícula real
            }
    }
    
   

    //Calculando  a media dos 5 alunos

    media_nota = soma_notas_finais/5.0;

    printf("\nA matricula com maior nota eh %f", matricula_maior_nota);
    printf("\nA media aritimetica eh: %f", media_nota);
    


    return 0;
}