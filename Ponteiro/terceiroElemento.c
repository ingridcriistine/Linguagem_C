//Declare um vetor de inteiros e preencha-o com os valores 1, 2, 3, 4 e 5. Em seguida, declare um ponteiro para esse vetor e modifique o valor do terceiro elemento através do ponteiro.

#include <stdio.h>

int main() {
    int inteiros[5] = {1, 2, 3, 4, 5};
    int num;

    int * ptr;
    ptr = &inteiros;
    
    for(int i = 0; i < 5; i++) {
        printf("\n%i", inteiros[i]);
    }

    printf("\n\n---------Modificar terceiro elemento--------");
    printf("\nDigite um valor: \n"); 
    scanf("%i", &num); 

    ptr[2] = num;

    for(int i = 0; i < 5; i++) {
        printf("\n%i", inteiros[i]);
    }
}
