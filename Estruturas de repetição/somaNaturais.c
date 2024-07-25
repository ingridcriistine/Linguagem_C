//Faça um programa que some todos os números naturais até o valor inserido pelo usuário

#include <stdio.h> 

int main() { 
    int limite;
    int soma = 0;

    printf("Digite um valor: ");
    scanf("%i", &limite);

    for(int i = 0; i < limite+1; i++) {
        if(i > 0) {
            soma = soma + i;
        }
    }
    printf("A soma dos numeros naturais ate o valor inserido equivale a %i\n", soma);
}
