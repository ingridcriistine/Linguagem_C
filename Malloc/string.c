//Crie um programa para alocar memória para uma string, e permitir o usuário escrever dentro da mesma.

#include <stdio.h>

int main() {
    int tamanho = 50;

    char * str = malloc(tamanho * sizeof(char));

    printf("Escreva uma palavra: ");
    scanf(" %s", str);

    printf("%s", str);

    free(str);
}
