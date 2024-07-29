#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H  
#define HEADER_H  

//node
typedef struct Node 
{
    int dado;
    struct Node *next;

} Node;

//construtor de node
Node *constructNode(int dado) {

    Node * node = (Node*) malloc(sizeof(Node));
    node->next = NULL;
    node->dado = dado;

    return node;
}

void push(Node ** node, int value) {

    //função recursiva
    if(*node== NULL) {

        Node * newNode = constructNode(value); //cria um novo nó
        *node = newNode;
        return;
    }

    if ((*node)->next == NULL) {
        
        Node * newNode = constructNode(value); //cria um novo nó
        (*node)->next = newNode;
        return;

    }

    return push(&(*node)->next, value);


    //while
    // Node * newNode = constructNode(value); //cria um novo nó
    // Node * temp = node;

    // while(temp->next != NULL) {

    //     temp = temp->next;
    // }

    // temp->next = newNode;

}

int * linkedToArray(Node * node, int * size) {

    int *newArray = malloc(sizeof(int)); 

    Node * temp = node;

    int j = 0;

    while(temp != NULL) {

        if(j != 0) {
            realloc(newArray, (j+1) * sizeof(int));
        }
        
        newArray[j] = temp->dado;
        temp = temp->next;

        j++;
    }

    *size = j;
    return newArray;

}

int Equals(Node * node1, Node * node2) {

    Node * a = node1;
    Node * b = node2;

    while(a != NULL && b != NULL) {

        if(a->dado != b->dado) {

            return 0;
        }

        a = a->next;
        b = b->next;

    }
    
    if((a == NULL && b != NULL) || (a != NULL && b == NULL)) {
        
        return 0;
    }

    return 1;
}

#endif 
