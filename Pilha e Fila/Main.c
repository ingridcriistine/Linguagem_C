#include "Funcoes.h"
#include <string.h>

int main()
{
    Stack stack = construct();

    Push(&stack, 2);
    Push(&stack, 3);
    Push(&stack, 4);
    Push(&stack, 5);

    printf(" aa %i ", stack.size);
    printf(" aa %i ", Pop(&stack));
    printf(" aa %i ", Top(&stack));
    printf(" aa %i ", Pop(&stack));
    printf(" aa %i ", Top(&stack));
    printf(" aa %i ", stack.size);
    Destruct(&stack);


    Queue queue = construct_();

    Enqueue(&queue, 3);
    Enqueue(&queue, 6);
    Enqueue(&queue, 9);
    Enqueue(&queue, 12);

    printf(" %i ", queue.size);
    printf(" %i ", Dequeue(&queue));
    printf(" %i ", queue.size);
    printf(" %i ", Dequeue(&queue));

    for (int i = 0; i < queue.size; i++)
    {
        printf("\n\n %i ", queue.array[i]);
    }

    Destruct(&queue);
}
