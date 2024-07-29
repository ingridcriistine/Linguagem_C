//Implemente o algoritmo de ordenação Selection Sort

#include <stdio.h>

int selectionSort(int * array, int size) {

    int aux;
    int menor;

    //percorre a lista
    for(int i = 0; i < size-1; i++) {

        menor = i;

        //identifica o menor
        for(int j = i+1; j < size; j++) {

            if(array[menor] > array[j]) {

                menor = j;
            }
        }

        aux = array[i];
        array[i] = array[menor];
        array[menor] = aux;
    }
}

int main() {
    
    int size;

    printf("\n\nDigite a quantidade de elementos que voce deseja adicionar: ");
    scanf("%i", &size);

    int * array = malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++) {

        printf("\nElemento %i: ", i+1);
        scanf("%i", &array[i]);

    }

    printf("\n\nAntes da ordenacao");
    printf("\n");
    for(int i = 0; i < size; i++) {

        printf(" %i ", array[i]);
    }

    selectionSort(array, size);

    printf("\n\nDepois da ordenacao");
    printf("\n");
    for(int i = 0; i < size; i++) {

        printf(" %i ", array[i]);
    }
}
