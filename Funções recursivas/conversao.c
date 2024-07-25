//Faça um programa que converta um número decimal para um número binário utilizando recursividade

#include <stdio.h>

int conversao(int n) {
    int resto;

    if(n == 0){
        return 1;
    }
    else {
        resto = n % 2;
        n = n / 2;
        
        conversao(n);
        printf("%i", resto);
    }
}

int main(){
    int n;

    printf("Insira um numero decimal: \n>>> ");
    scanf("%i", &n);

    printf("\n-------Conversao--------\n\n", n);
    conversao(n);
}
