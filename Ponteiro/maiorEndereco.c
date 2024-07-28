//Escreva um programa que contenha uma função que receba dois valores inteiros. Leia esses valores do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>

int maiorEndereco(int * num1, int * num2) {
    if(num1 > num2) {
        printf("\n\nO PRIMEIRO valor possui o maior endereco: ");
        printf("\nEndereco de %i: %x", *num1, num1);
        printf("\nEndereco de %i: %x", *num1, num2);
    } else {
        printf("\n\nO SEGUNDO valor possui o maior endereco: ");
        printf("\nEndereco de %i: %x", *num1, num1);
        printf("\nEndereco de %i: %x", *num2, num2);
    }
}

int main() {
    int a;
    int b;

    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &a);

    printf("\nDigite o segundo valor: \n");
    scanf("%i", &b);

    maiorEndereco(&a, &b);
}
