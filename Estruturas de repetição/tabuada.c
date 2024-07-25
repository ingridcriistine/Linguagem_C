//Faça um programa que exiba uma tabela com a tabuada de um valor inserido pelo usuário.

#include <stdio.h> 

int main() { 
    int num;
    int resultado;

    printf("____________Multiplicações_____________");
    printf("\n\nDigite um valor: ");
    scanf("%i", &num);

    printf("\nTabuada do %i\n", num);

    for(int mult = 0; mult < 11; mult++) {
        resultado = num * mult;
        printf("\n%i x %i = %i", num, mult, resultado);
    }
}
