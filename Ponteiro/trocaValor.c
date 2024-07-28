//Implementar uma função que receba dois valores e utilize ponteiros para trocar o valor das variáveis. Defina um valor inicial e exiba o valor inicial e o valor após a alteração.

#include <stdio.h>

int trocarValor(int * num1, int * num2) {
    int n1 = *num1;
    *num1 = *num2;
    *num2 = n1;
}

int main() {
    int a;
    int b;
    int * ptr;
    ptr = &a;

    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &a);

    printf("\nDigite o segundo valor: \n");
    scanf("%i", &b);

    printf("\nPrimeiro valor: %i", a);
    printf("\nSegundo valor: %i", b);

    trocarValor(&a, &b);

    printf("\n\n------------TROCA-----------");
    
    printf("\nPrimeiro valor: %i", a);
    printf("\nSegundo valor: %i", b);

}
