//2 - Faça um programa que armazene em um registro de dados (Texto) os seguintes dados de um funcionário de uma empresa:  
//Nome  
//Idade  
//Sexo (M/F)  
//CPF  
//Data de Nascimento  
//Código do Setor onde trabalha (0-99)  
//Cargo que ocupa (string de até 30 caracteres)  
//Salário  
//Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela. 

#include <stdio.h> 
#include <string.h> 

typedef struct { 

    char nome[50]; 
    char idade[3];
    char sexo[2]; 
    char cpf[11]; 
    char dataN[10]; 
    char codSetor[99]; 
    char cargo[30]; 
    char salario[10]; 

} Funcionario; 

 
int main() { 

    FILE * arquivo;
    arquivo = fopen("arquivo.txt", "a");

    Funcionario funcionario;

    printf("\n\n--Dados do funcionario--"); 

    printf("\nNome: "); 
    scanf("%s", &funcionario.nome);

    printf("\nIdade: "); 
    scanf("%s", &funcionario.idade);

    printf("\nSexo: "); 
    scanf("%s", &funcionario.sexo);

    printf("\nCPF: "); 
    scanf("%s", &funcionario.cpf);
    
    printf("\nData de Nascimento: "); 
    scanf("%s", &funcionario.dataN);

    printf("\nCodigo do setor: "); 
    scanf("%s", &funcionario.codSetor);

    printf("\nCargo: "); 
    scanf("%s", &funcionario.cargo);
                                                    
    printf("\nSalario: "); 
    scanf("%s", &funcionario.salario);

    printf("\n\n--Dados do funcionario--"); 
    printf("\n%s", funcionario.nome);
    printf("\n%s", funcionario.idade);
    printf("\n%s", funcionario.sexo);
    printf("\n%s", funcionario.cpf);
    printf("\n%s", funcionario.dataN);
    printf("\n%s", funcionario.codSetor);
    printf("\n%s", funcionario.cargo);
    printf("\n%s", funcionario.salario);

    fprintf(arquivo, "\n\n--Dados do funcionario--"); 
    fprintf(arquivo, "\n%s", funcionario.nome);
    fprintf(arquivo, "\n%s", funcionario.idade);
    fprintf(arquivo, "\n%s", funcionario.sexo);
    fprintf(arquivo, "\n%s", funcionario.cpf);
    fprintf(arquivo, "\n%s", funcionario.dataN);
    fprintf(arquivo, "\n%s", funcionario.codSetor);
    fprintf(arquivo, "\n%s", funcionario.cargo);
    fprintf(arquivo, "\n%s", funcionario.salario);
    fprintf(arquivo, "\n");
} 
