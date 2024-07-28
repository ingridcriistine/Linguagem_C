//Escreva uma função em C chamada somarVetor que recebe como parâmetro um vetor de inteiros e seu tamanho, e retorna a soma de todos os elementos do vetor.

#include <stdio.h>
#include <stdlib.h>

int somarVetor(int * vetores, int tamanho) {
    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma = soma + vetores[i];
    }

    return soma;
}

int main() {
    int inteiros[6] = {12, 23, 55, 70, 74, 82};
    int tam = (sizeof(inteiros))/4;

    // printf("%i", tam);

    printf("\nSoma dos vetores: %i", somarVetor(&inteiros, tam));
}
