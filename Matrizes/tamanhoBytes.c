//Calcule o tamanho de bytes que uma matriz ocupa dentro da memória do computador. a quantidade de índices é escolhida por você.

#include <stdio.h>
#include <stdlib.h>

int main() {
    //cada número inteiro conta como 4 bytes
    int matriz[5][4];

    int t = sizeof(matriz);

    printf("A matriz ocupa %i bytes", t);
}
