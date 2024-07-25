#include <stdio.h> 
#include <time.h>
#ifndef Banco_H 
#define Banco_H 
#define MAX_LENGTH 500

float deposito(float saldo, float valor) {
    saldo = saldo + valor;
    sleep(0.5);
    printf("\n----Operacao finalizada----");
    printf("\nSaldo atual da conta: %.2f", saldo);
    return saldo;
}

float emprestimo(float saldo, float valor, float divida) {
    saldo = saldo + valor;
    sleep(0.5);
    printf("\n----Operacao finalizada----");
    printf("\nSaldo atual da conta: %.2f", saldo);
    printf("\nDivida: %.2f", valor);
    return saldo;
}

float saque(float saldo, float valor) {
    int opSaque;
    int opValor;
    float parcial = 0;

    if (saldo > valor) {
        saldo = saldo - valor;
        sleep(0.5);
        printf("\n----Operacao finalizada----");
        printf("\nSaldo atual da conta: %.2f", saldo);
        return saldo;
    }
    else {
        printf("\nSaldo insuficiente. Gostaria de realizar um emprestimo?");
        printf("\n1 - Sim\n2 - Nao\n\n");
        scanf("%i", &opSaque);

        if (opSaque == 1) {
            printf("\n1 - Emprestar valor total\n2 - Emprestar valor parcial\n\n");
            scanf("%i", &opValor);

            if(opValor == 1) {
                emprestimo(saldo, valor, valor);
                return saldo;
            }
            if(opValor == 2) {
                parcial = valor - saldo;
                emprestimo(saldo, parcial, valor);
                return saldo;
            }
        }
    }
  
    return saldo;
}

float extrato(FILE * arquivo) {
    char linha[MAX_LENGTH];

    while (fgets(linha, MAX_LENGTH, arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
}

#endif
