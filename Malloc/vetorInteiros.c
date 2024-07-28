//Faça um programa que leia o tamanho de um vetor de inteiros e reserve dinamicamente memória para esse vetor. Em seguida, leia os elementos desse vetor, imprima o vetor lido e mostre 
//o resultado da soma dos números ímpares presentes no vetor 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int soma = 0;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    int * inteiros = malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++) {
        printf("\nDigite o elemento %i: ", i+1);
        scanf("%i", &inteiros[i]);
    }

    printf("\n---Vetor---\n");

    for(int i = 0; i < tamanho; i++) {
        printf("[%i]", inteiros[i]);
    }

    for(int i = 0; i < tamanho; i++) {
        if(inteiros[i] % 2 == 1) {
            soma = soma + inteiros[i];
        } else {
            soma = soma;
        }
    }

    free(inteiros);
    
    printf("\n\nResultado da soma dos numeros impares presentes no vetor: %i", soma);

}
