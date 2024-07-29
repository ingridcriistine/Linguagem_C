//Escreva uma função que verifica se duas listas dadas são iguais, ou melhor, se têm o mesmo conteúdo

#include "listaEncadeada.h"

int main() {

    Node * list1 = NULL;

    push(&list1, 23);
    push(&list1, 9);
    push(&list1, 5);
    push(&list1, 22);
    push(&list1, 1);

    Node * list2 = NULL;

    push(&list2, 23);
    push(&list2, 9);
    push(&list2, 5);
    push(&list2, 22);
    push(&list2, 1);


    int result = Equals(list1, list2);

    if(result == 1) {
        printf("As listas sao iguais.");
    }
    else {
        printf("As listas sao diferentes.");
    }
}
