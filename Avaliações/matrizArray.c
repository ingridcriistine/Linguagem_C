//Faça um programa que possui uma matriz 4 por 4. O usuário poderá escolher os valores que serão armazenados. 
//Após ler os valores, transforme esta matriz em um array alocando memória para a mesma.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int tamanho = sizeof(matriz);

    //printf("%i", tamanho);

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("\nLinha %i | Valor %i: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\n\n-------Matriz------- ");

    for(int i = 0; i < 4; i++) {
        printf("\n");
        for(int j = 0; j < 4; j++) {
            printf(" [%i] ", matriz[i][j]);
        }
    }

    int * array = malloc(tamanho);

    int indice = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            array[indice++] = matriz[i][j];
        }
    }

    printf("\n\n-------Array-------\n");
    for(int i = 0; i < tamanho/4; i++) {
        printf("[%i] ", array[i]);
    }

    free(array);
}
