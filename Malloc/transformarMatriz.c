//Crie um programa que transforme uma matriz 4x4(Insira dados para a exibição)e seus dados em um vetor simples. Printe este resultado.(Alocação de memória)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int t = sizeof(matriz);

    int * vetor = malloc(t);

    int test = 0;
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            vetor[test++] = matriz[i][j];
        }
    }

    printf("\n\n%d\n\n", test);

    for(int i = 0; i < test; i++) {
        printf("%i\n", vetor[i]);
    }
}
