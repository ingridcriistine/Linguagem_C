//Faça um programa que aloque memória para dois arrays. Some os valores de cada posição destes arrays, armazene um novo array esta soma de cada índice, e exiba os arrays iniciais e o resultado.

#include <stdio.h>

int main() {
    int t;

    printf("\n\n-----Primeiro array----- ");
    printf("\nTamanho: ");
    scanf("%i", &t);
    
    int * array3 = malloc(t * sizeof(int));
    int * array1 = malloc(t * sizeof(int));

    for(int i = 0; i < t; i++) {
        printf("\nValor %i: ", i+1);
        scanf("%i", &array1[i]);
    }

    printf("\n\n-----Segundo array----- ");
    int * array2 = malloc(t * sizeof(int));
    for(int i = 0; i < t; i++) {
        printf("\nValor %i: ", i+1);
        scanf("%i", &array2[i]);
        array3[i] = array1[i] + array2[i];
    }


    for(int i = 0; i < t; i++) {
        printf("[%i]", array1[i]);
    }

    printf("\n");

    for(int i = 0; i < t; i++) {
        printf("[%i]", array2[i]);
    }

    printf("\n");

    for(int i = 0; i < t; i++) {
        printf("[%i]", array3[i]);
    }

    free(array1);
    free(array2);
    free(array3);
}
