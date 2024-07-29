//Faça um programa para uma escola que leia informações de alunos de uma escola

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
   
   int dia;
   int mes;
   int ano;
   
} DataNasc;

typedef struct {
   
   char nome[30];
   char sobrenome[30];
   DataNasc dataNasc;
   char cpf[15];
   
} Responsavel;

typedef struct {
   
   char nome[30];
   char sobrenome[30];
   DataNasc dataNasc;
   Responsavel responsavel;
   
} Aluno;

int main() {

    Aluno aluno;

    //imprimir ficha do aluno cadastrado
    FILE * arquivo;
    arquivo = fopen("ficha.txt", "a");

    printf("\n\n==========CADASTRAR ALUNO===========");

    printf("\nNome: ");
    scanf("%s", &aluno.nome);

    printf("\nSobrenome: ");
    scanf("%s", &aluno.sobrenome);

    printf("\nData de nascimento");
    printf("\n    Dia: ");
    scanf("%i", &aluno.dataNasc.dia);
    printf("\n    Mes: ");
    scanf("%i", &aluno.dataNasc.mes);
    printf("\n    Ano: ");
    scanf("%i", &aluno.dataNasc.ano);

    printf("\nResponsavel");
    printf("\n    Nome: ");
    scanf("%s", &aluno.responsavel.nome);
    printf("\n    Sobrenome: ");
    scanf("%s", &aluno.responsavel.sobrenome);

    printf("\n    Data de nascimento");
    printf("\n        Dia: ");
    scanf("%i", &aluno.responsavel.dataNasc.dia);
    printf("\n        Mes: ");
    scanf("%i", &aluno.responsavel.dataNasc.mes);
    printf("\n        Ano: ");
    scanf("%i", &aluno.responsavel.dataNasc.ano);

    printf("\n    CPF: ");
    scanf("%s", &aluno.responsavel.cpf);

    fprintf(arquivo, "\n\n===========================================================");
    fprintf(arquivo, "\nFicha cadastral - %s %s", aluno.nome, aluno.sobrenome);
    fprintf(arquivo, "\nAluno: %s %s", aluno.nome, aluno.sobrenome);
    fprintf(arquivo, "\nData de nascimento: %i / %i / %i ", aluno.dataNasc.dia, aluno.dataNasc.mes, aluno.dataNasc.ano);
    fprintf(arquivo, "\nIdade: %i", 2024-aluno.dataNasc.ano);
    fprintf(arquivo, "\n\nResponsavel: %s %s", aluno.responsavel.nome, aluno.responsavel.sobrenome);
    fprintf(arquivo, "\nData de nascimento: %i / %i / %i", aluno.responsavel.dataNasc.dia, aluno.responsavel.dataNasc.mes, aluno.responsavel.dataNasc.ano);
    fprintf(arquivo, "\nIdade: %i", 2024-aluno.responsavel.dataNasc.ano);
    fprintf(arquivo, "\nCPF: %s", aluno.responsavel.cpf);

    printf("\n\nDados impressos!");

    fclose(arquivo);
}
