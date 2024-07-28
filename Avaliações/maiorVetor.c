//Faça um programa em linguagem C utilizando vetores. Você deverá permitir ao usuário escolher o tamanho de dois vetores, 
//inserir os valores dentro de suas posições e comparar qual vetor é o maior entre eles(soma).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t1;
    int t2;
    int soma1 = 0;
    int soma2 = 0;

    printf("\nDigite o tamanho do vetor 1: ");
    scanf("%i", &t1);

    int * vetor1 = malloc(t1 * sizeof(int));

    for(int i = 0; i < t1; i++) {
        printf("Valor %i: ", i+1);
        scanf("%i", &vetor1[i]);
        soma1 = soma1 + vetor1[i];
    }

    printf("\nDigite o tamanho do vetor 2: ");
    scanf("%i", &t2);

    int * vetor2 = malloc(t2 * sizeof(int));

    for(int i = 0; i < t2; i++) {
        printf("Valor %i: ", i+1);
        scanf("%i", &vetor2[i]);
        soma2 = soma2 + vetor2[i];
    }

    if(soma1 > soma2) {
        printf("\n\nO vetor 1 eh maior que o vetor 2.");
    }
    else {
        printf("\n\nO vetor 2 eh maior que o vetor 1.");
    }

    printf("\n\n>>>>>>>>Vetor 1\n");
    for(int i = 0; i < t1; i++) {
        printf("[%i]", vetor1[i]);
    }
    printf("\nSoma: %i", soma1);


    printf("\n\n>>>>>>>>Vetor 2\n");
    for(int i = 0; i < t2; i++) {
        printf("[%i]", vetor2[i]);
    }
    printf("\nSoma : %i", soma2);

    free(vetor1);
    free(vetor2);
}
