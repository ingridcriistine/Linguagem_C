//Escreva uma função em C chamada encontrarIndice que recebe como parâmetro um vetor de inteiros, seu tamanho e um valor inteiro, e retorna o índice da primeira ocorrência desse valor no vetor. 
//Se o valor não for encontrado, retorne -1.

#include <stdio.h>
#include <stdlib.h>

int encontrarIndice(int * vetor, int tamanho, int * n) {
    int indice = -1;

    for(int i = 0; i < tamanho; i++) {
        if(n == vetor[i]) {
            indice = i;
        }
    }

    printf("\nO numero digitado pode ser encontrado no indice %i do vetor", indice);

    return 0;
}

int main() {
    int inteiros[6] = {12, 23, 55, 70, 74, 82};
    int tam = (sizeof(inteiros))/4;
    // printf("%i", tam);
    int num;

    printf("Digite um valor: ");
    scanf("%i", &num);

    encontrarIndice(&inteiros, tam, num);
}
