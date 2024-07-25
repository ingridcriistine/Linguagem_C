//Faça um programa que leia três valores. Enquanto a soma desses três valores não resultarem em 45 o sistema repetirá seu processo.

#include <stdio.h> 

int main() { 
    int valor1;
    int valor2;
    int valor3;
    int soma;

    while(soma != 45){
        printf("----------------------------------");
        printf("\nPrimeiro valor: ");
        scanf("%i", &valor1);
        printf("\nSegundo valor: ");
        scanf("%i", &valor2);
        printf("\nTerceiro valor: ");
        scanf("%i", &valor3);
        soma = valor1 + valor2 + valor3;
        printf("\nA soma dos valores equivale a %i", soma);
    }
}
