//Faça um programa que leia informações de um usuário(Nome e sobrenome, Data de nascimento, CPF,) e exiba esses dados em uma espécie de certificado de conclusão do curso TDS;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    char nome[50]; 
    char cpf[15];
    char data[15];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite o seu cpf: ");
    scanf("%s", cpf);

    printf("Digite sua data de nascimento: ");
    scanf("%s", data);

    printf("\n\n------Certificado de conclusao do curso TDS------\n\nDados do aluno:\nNome: %s\nCPF: %s\nData de nascimento: %s", nome, cpf, data);

    return 0; 

}
