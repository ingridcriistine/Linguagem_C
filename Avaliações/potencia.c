//Implemente uma função recursiva para calcular a potência de um número positivo. A base e o expoente são inseridos.

#include <stdio.h>
#include <stdlib.h>

int potencia(int base,int expoente) {
    if(expoente == 0) {
        return 1;
    }

    else {
        return base * potencia(base, expoente-1);
    }
}

int main() {
    int num;
    int exp;

    printf("\nDigite um numero: ");
    scanf("%i", &num);

    printf("Digite o expoente: ");
    scanf("%i", &exp);

    printf("\n\nResultado: %i", potencia(num, exp));
    
}
