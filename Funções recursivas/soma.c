//Cálculo da soma de todos os valores até o número inserido pelo usuário

#include <stdio.h>

int soma(int c, int resultado, int limite) {
    int n_resultado = 0;

    if(c == limite){
        return resultado;
        // return 1;
    }
    else {
        n_resultado = resultado + c ;
        // printf("\n\nSoma: %i", n_resultado);
        return soma(c + 1, n_resultado, limite);
    }
}

int main(){
    int n;

    printf("Insira um numero: \n>>> ");
    scanf("%i", &n);
    printf("%d", soma(0, 0, n+1));

}
