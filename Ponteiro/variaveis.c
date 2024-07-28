//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
//Imprima os valores das variáveis antes e após a modificação.

#include <stdio.h>

int modificar(int * num, float * real, char * letra) {
    int newNum;
    float newReal;
    char newLetra;

    printf("\n-----------------MODIFICAR VARIAVEIS------------------");

    printf("\n\nANTES>>>>>>>>>");
    printf("\nNumero inteiro: %i", *num);
    printf("\nNumero real: %.2f", *real);
    printf("\nLetra: %c", *letra);

    printf("\n\nDigite um novo numero inteiro: \n");
    scanf("%i", &newNum);
    *num = newNum;

    printf("\nDigite um novo numero real: \n");
    scanf("%f", &newReal);
    *real = newReal;

    printf("\nDigite uma nova letra: \n");
    scanf(" %c", &newLetra);
    *letra = newLetra;

    printf("\n\nDEPOIS>>>>>>>>>");
    printf("\nNumero inteiro: %i", *num);
    printf("\nNumero real: %.2f", *real);
    printf("\nLetra: %c", *letra);

}

int main() {
    int a;
    float b;
    char c;

    printf("\nDigite um numero inteiro: \n");
    scanf("%i", &a);

    printf("\nDigite um numero real: \n");
    scanf("%f", &b);

    printf("\nDigite uma letra: \n");
    scanf(" %c", &c);

    modificar(&a, &b, &c);
}
