//Crie uma calculadora de operadores lógicos onde o usuário pode escolher a operação que quer fazer. AND, OR, NOT, XOR.

#include <stdio.h>

int main() {
    int operacao;
    int num1;
    int num2;
    int e;
    int ou;
    int not1;
    int not2;
    int xor;

    printf("\n\nCalculadora de operadores logicos\n\n");
    printf("\nOPERACOES\n1 - Funcao E(&) \n2 - Funcao OU(|) \n3 - Funcao NOT(~) \n4 - Funcao XOR(^)");
    printf("\nDigite o numero da operacao desejada:  ");
    scanf("%i", &operacao);

    printf("\nDigite o primeiro numero: ");
    scanf("%i", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%i", &num2);

    switch (operacao) {

        case 1:
            e = num1&num2;
            printf("\nFuncao E: %i", e);
            break;
        
        case 2:
            ou = num1|num2;
            printf("\nFuncao OU: %i", ou);
            break;

        case 3:
            not1 = ~num1;
            not2 = ~num2;
            printf("\nPrimeiro numero: %i", not1);
            printf("\nSegundo numero: %i", not2);
            break;

        case 4:
            xor = num1^num2;
            printf("\nFuncao XOR: %i", xor);
            break;
    }

    return 0;
}
