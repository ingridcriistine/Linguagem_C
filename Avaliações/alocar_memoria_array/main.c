//Faça um programa que possua sua própria header e que contenha funções para alocar memória para arrays inteiros do usuário. 
//Seu usuário poderá escolher o tamanho do array e sua função deverá retornar esse array. permita o usuário inserir os dados desejados dentro do array.

#include <stdlib.h>
#include "header.h"

int main() {
    int tamanho;

    printf("\nDigite o tamanho do array: ");
    scanf("%i", &tamanho);

    int * a = alocarMem(tamanho);

    for(int i = 0; i < tamanho; i++) {
        printf("Valor %i: ", i+1);
        scanf("%i", &a[i]);
    }

    for(int i = 0; i < tamanho; i++) {
        printf(" [%i] ", a[i]);
    }

    free(a);
}
