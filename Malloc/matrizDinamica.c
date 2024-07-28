//Aloque memória para uma matriz. O usuário decide quantas linhas e quantas colunas devem existir.

#include <stdio.h>

int main() {
    int l = 0;
    int c = 0;

    printf("Numero de linhas: ");
    scanf("%i", &l);
    printf("Numero de colunas: ");
    scanf("%i", &c);

    int **matriz;

    **matriz = (int**)malloc(l * sizeof(int*));
    
    for(int i = 0; i < l; i++) {
        matriz[i] = (int*)malloc(c * sizeof(int));

        for(int j = 0; j < c; j++) {
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < l; i++) {
        printf("\n");
        for(int j = 0; j < c; j++) {
            printf("%i ", matriz[i][j]);
        }
    }

    for(int i = 0; i < l; i++) {
        free(matriz[i]);
    }

    free(matriz);
}
