//Desenvolva uma biblioteca de funções que permitem o cálculo de operações lógicas. O nome dessa biblioteca deve ser “Binary.h”

#include "binary.h" 

int main() {
    int n1;
    int n2;
    int op;
    int result = 0;

    printf("\n\n-------------Calculadora logica--------------");
    printf("\n1 - And");
    printf("\n2 - Or");
    printf("\n3 - Nand");
    printf("\n4 - Nor");
    printf("\n5 - Xor");
    printf("\n6 - Not");
    printf("\n\nEscolha uma operacao: ");
    scanf("%i", &op);

    if(op == 6) {
        printf("\n\nDigite um numero: ");
        scanf("%i", &n1);
        result = not(n1);
        printf("\n%i", result);
    }
    else {
        printf("\n\nDigite o primeiro numero: ");
        scanf("%i", &n1);
        printf("\nDigite o segundo numero: ");
        scanf("%i", &n2);

        switch (op) {
            case 1:
                result = and(n1, n2);
                printf("\n%i", result);
                break;
            case 2:
                result = or(n1, n2);
                printf("\n%i", result);
                break;
            case 3:
                result = nand(n1, n2);
                printf("\n%i", result);
                break;
            case 4:
                result = nor(n1, n2);
                printf("\n%i", result);
                break;
            case 5:
                result = xor(n1, n2);
                printf("\n%i", result);
                break;
        }
    }
}
