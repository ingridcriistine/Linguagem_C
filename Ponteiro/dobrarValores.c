//Escreva uma função em C chamada dobrarValores que recebe como parâmetro um vetor de inteiros e seu tamanho, e dobra o valor de cada elemento do vetor.

#include <stdio.h>
#include <stdlib.h>

int dobrarValores(int * vetores, int tamanho) {

    for(int i = 0; i < tamanho; i++) {
        vetores[i] = vetores[i] * 2;
        printf("\n%i", vetores[i]);
    }

    return 0;
}

int main() {
    int inteiros[6] = {12, 23, 55, 70, 74, 82};
    int tam = (sizeof(inteiros))/4;

    // printf("%i", tam);
    dobrarValores(&inteiros, tam);
}
