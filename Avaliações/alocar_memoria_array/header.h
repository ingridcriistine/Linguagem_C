//Faça um programa que possua sua própria header e que contenha funções para alocar memória para arrays inteiros do usuário. 
//Seu usuário poderá escolher o tamanho do array e sua função deverá retornar esse array. permita o usuário inserir os dados desejados dentro do array.

#include <stdio.h>
#include <stdlib.h>
#ifndef HEADER_H
#define HEADER_H

int alocarMem(int t) {
    int * array = (int *) malloc(t * sizeof(int));

    return *array;
}

#endif 
