//Faça um programa que exiba a tabuada de um valor inserido por um usuário.

#include <stdio.h>

int multiplicacao(int mult, int nUsuario) {
    int resultado = 0;

    if(mult == 11){
        return 1;
    }
    else {
        resultado = nUsuario * mult;
        printf("\n\n%i * %i = %i", mult, nUsuario, resultado);
        return multiplicacao(mult + 1, nUsuario);
    }
}

int main(){
    int n;

    printf("Insira um numero: \n>>> ");
    scanf("%i", &n);

    printf("\n-------Tabuada do %i--------", n);
    multiplicacao(0, n);
}
