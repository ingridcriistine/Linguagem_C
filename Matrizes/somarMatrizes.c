//Crie um programa que leia duas matrizes três por dois. Você deverá somar as duas matrizes e exibir as matrizes originais, e o resultado. 

#include <stdio.h>

int main() {
    int matriz1[3][2];
    int matriz2[3][2];
    int soma1 = 0;
    int soma2 = 0;
    int soma = 0;

    printf("\n---------MATRIZ 1------------");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("\nDigite o valor %i da linha %i: ", j+1, i+1);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("\n\n---------MATRIZ 2------------");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("\nDigite o valor %i da linha %i: ", j+1, i+1);
            scanf("%i", &matriz2[i][j]);
        }
    }


    printf("\nMATRIZ 1\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%i  |  ", matriz1[i][j]);
            soma1 += matriz1[i][j];
        }
    }

    printf("\n\nMATRIZ 2\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%i  |  ", matriz2[i][j]);
            soma2 += matriz2[i][j];
        }
    }

    soma = soma1 + soma2;
    printf("\n\n\nSoma das matrizes: %i", soma);
    
}
