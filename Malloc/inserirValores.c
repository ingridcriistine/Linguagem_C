//Programa que leia a quantidade de valores que o usuário deseja inserir dentro de um array e o permita inserir estes valores.

#include <stdio.h>

int main() {
    int tamanho;

    printf("Quantos valores voce deseja inserir: ");
    scanf("%i", &tamanho);

    int * valores = (int*) malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++) {
        printf("Valor %i: ", i+1);
        scanf("%i", &valores[i]);
    }

    for(int j = 0; j < tamanho; j++) {
        printf("[%i]", valores[j]);
    }

    free(valores);
}
