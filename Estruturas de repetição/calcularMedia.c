//Calcular a média de N valores inseridos pelo usuário.

#include <stdio.h>

int main() {  
    int qtd_valor;
    int valores = 0;
    int valor = 0;
    int resultado = 0, media = 0;

    printf("____________Calculadora de media____________"); 
    printf("\n\nQuantidade de valores: "); 
    scanf("%i", &qtd_valor); 

    for(int i = 1; i <= qtd_valor; i++) {
        printf("\n\nDigite o valor %i: ", i); 
        scanf("%i", &valor); 
        resultado = resultado + valor;
    }

    media = resultado / qtd_valor;
    printf("%i", media);
}
