#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H  
#define HEADER_H  

//node
typedef struct Node 
{
    int dado;
    struct Node *prev;

} Node;

//construtor de node
Node *constructNode(int dado) {

    Node * node = (Node*) malloc(sizeof(Node));
    node->prev = NULL;
    node->dado = dado;

    return node;
}

//cabeçalho
typedef struct Pilha {

    Node * head; 
    int size;

} Pilha;

//construtor de head
Pilha *constructPilha() {
    
    Pilha * pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->head = NULL;
    pilha->size = 0;

    return pilha;
}


void push(Pilha * pilha, int value) {

    pilha->size++; 

    Node * newNode = constructNode(value); //cria um novo nó

    newNode->dado = value; //atribui um valor para o nó
    newNode->prev = pilha->head; //novo nó aponta para o endereço do antigo nó
    pilha->head = newNode; //head agora é o novo nó (topo)

}

int pop(Pilha * pilha) {

    Node * freeNo = pilha->head;  //cria um ponteiro para head

    pilha->size--;

    int aux = freeNo->dado; //guarda o valor atual da head (último elemento da lista)

    pilha->head = freeNo->prev; //atribui o nó anterior para head

    free(freeNo); //dá free no head atual

    return aux;
}

int top(Pilha * pilha) {

    return pilha->head->dado;
}

#endif 
