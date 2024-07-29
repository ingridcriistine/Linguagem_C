//Crie um programa que permita a leitura de diferentes veículos
//(Placa, Cor, Marca, Modelo, Ano). O usuário poderá escolher a 
//quantidade de veículos que serão lidos. após isso, imprima os dados.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    char placa[10];
    char cor[20];
    char marca[30];
    char modelo[30];
    char ano[8];

} Veiculo;

int main() {

    int qtd;

    printf("\n\nDigite a quantidade de veiculos que serao lidos: ");
    scanf("%i", &qtd);

    Veiculo * veiculo = malloc(qtd * sizeof(Veiculo));

    for(int i = 0; i < qtd; i++) {

        printf("\n\nVEICULO %i", i+1);

        printf("\nPlaca: ");
        scanf("%s", &veiculo[i].placa);

        printf("\nCor: ");
        scanf("%s", &veiculo[i].cor);

        printf("\nMarca: ");
        scanf("%s", &veiculo[i].marca);

        printf("\nModelo: ");
        scanf("%s", &veiculo[i].modelo);

        printf("\nAno: ");
        scanf("%s", &veiculo[i].ano);
    }

    printf("\n\n\n================ VEICULOS ===================");

    for(int i = 0; i < qtd; i++) {

        printf("\n\n>>>VEICULO %i", i+1);
        printf("\nPlaca: %s", veiculo[i].placa);
        printf("\nCor: %s", veiculo[i].cor);
        printf("\nMarca: %s", veiculo[i].marca);
        printf("\nModelo: %s", veiculo[i].modelo);
        printf("\nAno: %s", veiculo[i].ano);
    }

    free(veiculo);
}
