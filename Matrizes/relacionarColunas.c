//Crie um programa que simule uma questão de relacionar colunas de uma prova. Defina a posição das respostas e das afirmações e permita o usuário relacionar 
//elas e ver se sua resposta está correta ao final do programa.

#include <stdio.h>

int main() {
    int afirmacoes[3] = {0, 0, 0};
    int respostas[2] = {1, 2};
    int resposta1;
    int resposta2;
    int resposta3;

    printf("\n[%i] Verdadeiro",  respostas[0]);
    printf("\n[%i] Falso",  respostas[1]);

    printf("\n\n[ ] O ceu e azul",  afirmacoes[0]);
    printf("\n[ ] A grama e verde",  afirmacoes[1]);
    printf("\n[ ] O morango e amarelo",  afirmacoes[2]);

    printf("\n\nRespostas: \n");
    scanf("%i", &resposta1);
    scanf("%i", &resposta2);
    scanf("%i", &resposta3);

    printf("\n\n-----Correcao:");
    if(resposta1 == 1) {
        printf("\nCorreto.");
    } else {
        printf("\nIncorreto.");
    }
    if(resposta2 == 1) {
        printf("\nCorreto.");
    } else {
        printf("\nIncorreto.");
    }
    if(resposta3 == 2) {
        printf("\nCorreto.");
    } else {
        printf("\nIncorreto.");
    }
}
