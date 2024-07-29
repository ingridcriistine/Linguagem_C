//1 - Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matrícula, Nome, Código da Disciplina, Nota1 e Nota2. 
//Considere uma turma de até 10 alunos. Após ler todos os dados digitados e armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos 
//com as suas respectivas médias finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).

#include <stdio.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    int nota1;
    int nota2;
} Aluno;

int media(int n1, int n2) {
    n2 = n2 * 2;
    int media = 0;

    media = (n1 + n2) / 3;

    return media;
}

int main() {

    Aluno aluno[10];

    int mediaA = 0;

    for(int i = 0; i < 10; i++) {
        printf("\n\n>>>>> Aluno %i", i+1);

        printf("\n\nNumero de matricula: ");
        scanf("%i", &aluno[i].matricula);
        
        printf("\nNome: ");
        scanf("%s", &aluno[i].nome);


        printf("\nCodigo da disciplina: ");
        scanf("%s", &aluno[i].codigoDisciplina);

        printf("\nNota 1: ");
        scanf("%i", &aluno[i].nota1);

        printf("\nNota 2: ");
        scanf("%i", &aluno[i].nota2);
    }

    //print dos valores do vetor
    for(int i = 0; i < 5; i++) {
        mediaA = media(aluno[i].nota1, aluno[i].nota2);
    
        printf("\n\nNome: %s       | Media final: %i", aluno[i].nome, mediaA);
    }
}
