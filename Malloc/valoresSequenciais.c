//Crie uma função que receba o tamanho de um vetor para a função executar. A função deve retornar um ponteiro para um array de inteiros alocado dinamicamente com o tamanho especificado. 
//Preencha o array com valores sequenciais até o tamanho desejado pelo usuário e retorne o ponteiro.

#include <stdio.h>

int executa(tamanho) {
    int * vetor = malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++) {
        vetor[i] = i+1;
    }

    return vetor;
}

int main() {
    int t;

    printf("Digite um tamanho: ");
    scanf("%i", &t);

    int * ptr = executa(t);

    for(int i = 0; i < t; i++) {
        printf("[%i]", ptr[i]);
    }
}
