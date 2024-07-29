//Construa os métodos de fila.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef HEADER_H
#define HEADER_H

typedef struct Queue {

    int * array;
    int size;
    int capacity;

} Queue;

Queue construct() {

    Queue queue;

    queue.array = NULL;
    queue.size = 0;
    queue.capacity = 0;

    return queue;
}

Queue destruct(Queue * queue) {

    free(queue->array);
}

void enqueue(Queue * queue, int value) {

    if(queue->array == NULL) {

        queue->capacity = 2;
        queue->array = (int*) malloc (queue->capacity * sizeof(int));
    }

    if(queue->size == queue->capacity) {

        queue->capacity = queue->capacity * 2;
        queue->array = (int*) realloc (queue->array, queue->capacity * sizeof(int));
    }

    queue->array[queue->size-1] = value;
    queue->size++;
}

int dequeue(Queue * queue) {

    int aux = queue->array[0];

    for(int i = 0; i < queue->size-1; i++) {

        queue->array[i] = queue->array[i+1];
    }

    return aux;
}

int peekFirst(Queue * queue) {

    return queue->array[0];
}

int peekLast(Queue * queue) {

    return queue->array[queue->size-1];
}

#endif
