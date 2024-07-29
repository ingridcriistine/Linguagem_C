//Escreva uma função que copie um vetor para uma lista encadeada  

#include "listaEncadeada.h"

int main() {

    int array[] = {1,2,3,4,5,6};

    Node * listaEncadeada = NULL;

    for(int i = 0; i < 6; i++) {
        push(&listaEncadeada, array[i]);
    }
}
