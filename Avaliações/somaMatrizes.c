//Utilizando matrizes, faça um programa que possua quatro matrizes 3 por 3. some o valor total da primeira mais a segunda e da terceira mais a quarta. 
//Após isso, Multiplique o resultado de (matriz1 + matriz2) e (matriz3 + matriz4). 

// Os valores são 
// 1: 1,2,3,4,5,6,7,8,9
// 2: 9,8,7,6,5,4,3,2,1
// 3: 2,3,6,7,8,9,6,4,3
// 4: 3,8,6,8,9,9,9,6,5

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int matriz3[3][3] = {{2,3,6},{7,8,9},{6,4,3}};
    int matriz4[3][3] = {{3,8,6},{8,9,9},{9,6,5}};

    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;
    int soma4 = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            soma1 = soma1 + matriz1[i][j];
            soma2 = soma2 + matriz2[i][j];
            soma3 = soma3 + matriz3[i][j];
            soma4 = soma4 + matriz4[i][j];
        }
    }

    int resultado = (soma1 + soma2) * (soma3 + soma4);

    printf("\nSoma matriz 1: %i", soma1);
    printf("\nSoma matriz 2: %i", soma2);
    printf("\nSoma matriz 3: %i", soma3);
    printf("\nSoma matriz 4: %i", soma4);
    printf("\n\nResultado: %i", resultado);
}
