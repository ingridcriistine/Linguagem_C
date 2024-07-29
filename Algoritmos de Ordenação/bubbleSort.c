#include <stdio.h>

int bubbleSort(int * array, int size) {

    int aux;

    for(int i = 0; i < size-1; i++) {

        for (int j = 0; j < size; j++) {
            
            if(array[j] > array[j+1]) {

                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
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

    bubbleSort(array, size);

    printf("\n\nDepois da ordenacao");
    printf("\n");
    for(int i = 0; i < size; i++) {

        printf(" %i ", array[i]);
    }
}
