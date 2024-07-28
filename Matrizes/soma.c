//Faça um programa que leia uma matriz 4 por 4. Após armazenar todos esses valores, faça a soma de todos eles.

#include <stdio.h> 

int main() {
    int matriz[4][4];
    int soma = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSoma dos valores da matriz: %i", soma);

}
