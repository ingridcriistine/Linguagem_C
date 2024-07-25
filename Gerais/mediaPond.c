//Calcule a média ponderada onde cada trimestre tem um peso diferente(2,3,5). Insira as notas diretamente no código para resolução

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    float nota1 = 9.6;
    float nota2 = 5.4;
    float nota3 = 7.8;

    float peso1 = 2;
    float peso2 = 3;
    float peso3 = 5;

    float pesoTot = peso1+peso2+peso3;

    float media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / pesoTot;

    setlocale(LC_ALL, "Portuguese");
    printf("A media ponderada do aluno e: %.2f", media);

    return 0;
}
