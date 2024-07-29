//Construa os métodos de pilha.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef HEADER_H
#define HEADER_H

typedef struct Stack {

    int * array;
    int size;
    int capacity;

} Stack;

Stack construct() {

    Stack stack;

    stack.array = NULL;
    stack.size = 0;
    stack.capacity = 0;

    return stack;
}

Stack destruct(Stack * stack) {

    free(stack->array);
}

void push(Stack * stack, int value) {

    if(stack->array == NULL) {

        stack->capacity = 2;
        stack->array = (int*) malloc (stack->capacity * sizeof(int));
    }

    if(stack->size == stack->capacity) {

        stack->capacity = stack->capacity * 2;
        stack->array = (int*) realloc (stack->array, stack->capacity * sizeof(int));
    }

    stack->array[stack->size] = value;
    stack->size++;
}

int pop(Stack * stack) {

    int aux = stack->array[stack->size-1];
    stack->size--;

    return aux;
}

int top(Stack * stack) {

    return stack->array[stack->size-1];
}

#endif
