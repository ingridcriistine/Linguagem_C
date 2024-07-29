//Implemente o algoritmo de ordenação Insertion Sort.

#include <stdio.h>

int insertionSort(int * array, int size) {

    int aux;
    int menor;
    int j;

    //percorre a lista
    for(int i = 1; i < size; i++) {

        menor = array[i];
        j = i-1;

        for(int j = i-1; j >= 0; j--) {

            if(menor < array[j]) {
                array[j+1] = array[j];
                if(j == 0) array[j] = menor;
            }
            else {
                array[j+1] = menor;
                break;
            }
        }

        // while(j >= 0 && array[j] > menor) {
            
        //     array[j+1] = array[j];
        //     j--;
        // }

        // array[j+1] = menor;
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

    insertionSort(array, size);

    printf("\n\nDepois da ordenacao");
    printf("\n");
    for(int i = 0; i < size; i++) {

        printf(" %i ", array[i]);
    }
}
