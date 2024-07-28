//Escreva uma função em C chamada inverterVetor que recebe como parâmetro um vetor de inteiros e seu tamanho, e inverte a ordem dos elementos do vetor.

#include <stdio.h>
#include <stdlib.h>

int inverterVetor(int * vetor, int tamanho) {
    for(int i = tamanho-1; i >= 0; i = i-1) {
        printf("\n%i", vetor[i]);
    }
}

int main() {
    int inteiros[6] = {12, 23, 55, 70, 74, 82};
    int tam = (sizeof(inteiros))/4;
    // printf("%i", tam);

    inverterVetor(&inteiros, tam);
}
