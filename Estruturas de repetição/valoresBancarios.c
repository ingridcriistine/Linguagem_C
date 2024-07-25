//O chefe da empresa onde você trabalha lhe deu uma atividade: desenvolver um programa que faça a verificação de valores bancários e permita o saque ou o depósito. 
//O saque só pode ser feito se o valor total da conta for maior que 60 reais.

#include <stdio.h> 


int main() { 

    int operacao; 
    int sair;
    float conta = 0; 
    float deposito; 
    float saque;
 
    printf("\n\n----------Verificacao de valores bancarios----------\n"); 

    while(conta >= 0) {
        while(conta < 60) {
            printf("\n1 - Deposito\n");
            scanf("%i", &operacao); 

            if(operacao == 1) {
                printf("\nSaldo da conta: %f", conta); 
                printf("\nDigite o valor do deposito: "); 
                scanf("%f", &deposito); 
                conta = conta + deposito; 
            }

            printf("\n\nSaldo atual da conta: %f", conta); 

            printf("\n\nDigite 0 para sair e 1 para continuar: "); 
            scanf("%i", &sair); 
            if(sair == 0) {
                break;
            }
            else {
                continue;
            }
        }

        while(conta > 60) {
            printf("\n\n1 - Deposito\n2 - Saque\n");
            scanf("%i", &operacao); 

            if(operacao == 1) {
                printf("\nSaldo da conta: %f", conta); 
                printf("\nDigite o valor do deposito: "); 
                scanf("%f", &deposito); 
                conta = conta + deposito;
            }
            
            if(operacao == 2) { 
                printf("\nSaldo da conta: %f", conta); 
                printf("\nDigite o valor do saque: "); 
                scanf("%f", &saque); 
                conta = conta - saque; 
            } 

            printf("\n\nSaldo atual da conta: %f", conta); 

            printf("\n\nDigite 0 para sair e 1 para continuar: "); 
            scanf("%i", &sair); 
            if(sair == 0) {
                break;
            }
            else {
                continue;
            }
        }
      
        printf("\n\nDeseja mesmos sair? \n0 para sair e 1 para continuar: "); 
        scanf("%i", &sair); 

      
        if(sair == 0) {
            break;
        }
        else {
            continue;
        }
    }
}

