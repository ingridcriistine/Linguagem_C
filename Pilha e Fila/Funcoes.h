#include <stdio.h>
#include <string.h>
#ifndef HEADER_H
#define HEADER_H

typedef struct
{
    int size;
    int capacity;
    int *array;

} Stack;

Stack construct()
{
    Stack stack;

    stack.size = 0;
    stack.capacity = 0;
    stack.array = NULL;

    return stack;
}

void Destruct(Stack *stack) {

    free(stack->array);
}

typedef struct
{
    int size;
    int capacity;
    int *array;

} Queue;

Queue construct_()
{
    Queue queue;
    queue.size = 0;
    queue.capacity = 0;
    queue.array = NULL;

    return queue;
}

void Destruct_(Queue *queue) {

    free(queue->array);
}

void Push(Stack *stack, int value)
{
    if (stack->array == NULL)
    {
        stack->capacity = 2;
        stack->array = (int*) malloc(stack->capacity * sizeof(int));
        stack->array[stack->size] = value;
        stack->size++;

        return;
    }

    if (stack->capacity == stack->size)
    {
        stack->capacity = stack->capacity * 2;
        realloc(stack->array, stack->capacity * sizeof(int));
    }

    stack->array[stack->size] = value;
    stack->size++;

}

int Pop(Stack *stack)
{
    stack->size--;
    int aux = stack->array[stack->size];

    return aux;
}

int Top(Stack *stack)
{
    return stack->array[stack->size-1];
}

void Enqueue(Queue *queue, int value)
{
     if(queue->array == NULL) {

        queue->capacity = 2;
        queue->array = (int*) malloc(queue->capacity * sizeof(int));

     }

     if(queue->size == queue->capacity) {

        queue->capacity *= 2;
        realloc(queue->array, queue->capacity * sizeof(int));

     }

    queue->array[queue->size] = value;
    queue->size++;

}

int Dequeue(Queue *queue)
{
    int aux = queue->array[0];

    for(int i = 0; i < queue->size; i++) {
        queue->array[i] = queue->array[i+1];
    }

    queue->size--;

    return aux;
}

#endif
