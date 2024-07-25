//Faça um programa para um banco que permita fazer as operações bancárias, como depósito, saque, extrato, empréstimo usar txt para imprimir as funções necessárias. Desenvolva as funções dentro de uma 
//header chamada “Banco.h”

#include "banco.h"

int main() {
    int op;
    float saldo = 0;
    float valor = 0;

    FILE * arquivo;
    arquivo = fopen("Extrato.txt", "r");

    printf("\nDigite o valor do seu saldo: ");
    scanf("%f", &saldo);

    while(1) {
        printf("\n-----------------------------------------");
        printf("\n\n\nEscolha uma operacao: ");
        printf("\n1 - Deposito\n2 - Saque\n3 - Emprestimo\n4 - Extrato\n5 - Sair\n\n");
        scanf("%i", &op);

        switch (op) {
            
            case 1:
                printf("\nValor do deposito: ");
                scanf("%f", &valor);
                saldo = deposito(saldo, valor);

                fprintf(arquivo,"\nDeposito realizado no valor de R$ %.2f", valor);
                fprintf(arquivo,"\nSaldo atual: R$ %.2f", saldo);
                break;

            case 2:
                printf("\nValor do saque: ");
                scanf("%f", &valor);
                saldo = saque(saldo, valor);

                fprintf(arquivo,"\nSaque realizado no valor de R$ %.2f", valor);
                fprintf(arquivo,"\nSaldo atual: R$ %.2f", saldo);
                break;

            case 3:
                printf("\nValor do emprestimo: ");
                scanf("%f", &valor);
                saldo = emprestimo(saldo, valor, valor);

                fprintf(arquivo,"\nEmprestimo realizado no valor de R$ %.2f", valor);
                fprintf(arquivo,"\nDivida de R$ %.2f", valor);
                fprintf(arquivo,"\nSaldo atual: R$ %.2f", saldo);
                break;

            case 4:
                extrato(arquivo);
                break;

            case 5:
                break;
            }

        if(op == 5) {
            break;
        }
    }
}
