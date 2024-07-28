//Declare uma variável inteira e um ponteiro para inteiro. Atribua o endereço da variável à variável ponteiro e modifique o valor da variável através do ponteiro. 
//Escreva uma função em C chamada contarElementos que recebe como parâmetro um vetor de inteiros e seu tamanho, e retorna a quantidade de elementos pares e ímpares no vetor.

#include <stdio.h>

int contarElementos(int * vetor, int tamanho) {
    int contadorPar = 0;
    int contadorImpar = 0;

    for(int i = 0; i < tamanho; i++) {
        if((vetor[i] % 2) == 0) {
            contadorPar = contadorPar + 1;
        }
        else {
            contadorImpar = contadorImpar + 1;
        }
    }

    printf("\n\nQuantidade de elementos pares: %i",contadorPar);
    printf("\nQuantidade de elementos impares: %i",contadorImpar);
}

int main() {
    int inteiros[6] = {12, 23, 55, 70, 74, 82};
    int tam = (sizeof(inteiros))/4;

    contarElementos(&inteiros, tam);
}
