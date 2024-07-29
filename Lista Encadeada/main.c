// Desenvolva os métodos de pilha e fila para lista encadeada(com e sem cabeçalho).

#include "fila.h"

int main() {

    // Pilha * pilha = constructPilha();

    // push(pilha, 1);
    // push(pilha, 2);
    // push(pilha, 3);

    // printf("%i", pop(pilha));
    // printf("%i", pop(pilha));
    // printf("%i", top(pilha));

    Queue * queue = constructQueue();

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printf("%i", dequeue(queue));
    printf("%i", dequeue(queue));
    printf("%i", peek(queue));

    // Node *aux = search(queue, 2);
    // printf("%i",aux->dado );
}
