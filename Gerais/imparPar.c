//Utilizando operadores matemáticos, desenvolva um código para detectar se um número inteiro é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero = 33;

    if (numero%2 == 0) {
        printf("O numero %i e par.", numero);
    } 
    else {
        printf("O numero %i e impar.", numero);
    }

    setlocale(LC_ALL, "Portuguese");

    return 0;
}
