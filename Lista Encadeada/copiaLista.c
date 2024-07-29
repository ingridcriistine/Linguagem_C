//Escreva uma função que copie uma lista encadeada para um vetor

#include "listaEncadeada.h"

int main() {

    int * array;
    int size;

    Node * temp = NULL;

    push(&temp, 23);
    push(&temp, 9);
    push(&temp, 5);
    push(&temp, 22);
    push(&temp, 1);

    array = linkedToArray(temp, &size);

    for(int i = 0; i < size; i++) {

        printf("%i ", array[i]);
    }
}
