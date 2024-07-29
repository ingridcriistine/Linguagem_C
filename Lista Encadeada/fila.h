#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H  
#define HEADER_H  

typedef struct Node
{
    int dado;
    struct Node *prev;
    struct Node *next;

} Node;

Node *constructNode(int dado) {

    Node * node = (Node*) malloc(sizeof(Node));
    node->prev = NULL;
    node->next = NULL;
    node->dado = dado;

    return node;
}

typedef struct Queue {

    Node * head;
    Node * tail;
    int size;

} Queue;

Queue *constructQueue() {

    Queue * queue = (Queue*) malloc(sizeof(Queue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;

    return queue;
}

void enqueue(Queue * queue, int value) {

    queue->size++;

    Node * newNode = constructNode(value);
    
    if(queue->head == NULL) {

        queue->head = newNode;
        queue->tail = newNode;
        newNode->dado = value;
    }

    queue->tail->next = newNode;
    newNode->prev = queue->tail;
    queue->tail = newNode;

    
}

int dequeue(Queue * queue) {

    Node * freeNo = queue->head;

    int aux = freeNo->dado;

    queue->size--;
    queue->head->prev = NULL;
    queue->head = freeNo->next;

    free(freeNo);

    return aux;
}

int peek(Queue * queue) {

    return queue->head->dado;
}

Node * search(Queue * queue, int valor) {

    Node * atual = queue->head;

    while(atual != NULL) {

        if(atual->dado == valor) {
            return atual;
        }

        atual = atual->next;
    }

    return atual;
}

#endif 
