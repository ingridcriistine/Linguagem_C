//Escreva uma função em C chamada encontrarMaiorElemento que recebe como parâmetro um vetor de inteiros e seu tamanho, e retorna o maior elemento do vetor.

#include <stdio.h>
#include <stdlib.h>

int encontrarMaiorElemento(int * vetores, int tamanho) {
    int maior = 0;

    for(int i = 0; i < tamanho; i++) {
        if(vetores[i] > maior) {
            maior = vetores[i];
        }
    }

    return maior;
}

int main() {
    int inteiros[6] = {12, 23, 55, 70, 74, 82};
    int tam = (sizeof(inteiros))/4;

    // printf("%i", tam);
    printf("\nMaior elemento do vetor: %i", encontrarMaiorElemento(&inteiros, tam));
}
