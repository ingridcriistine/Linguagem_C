//Crie um programa que armazene em uma tabela informações de alunos, onde será inserido notas de disciplinas.

#include <stdio.h> 
#include <stdlib.h> 

int main() { 
    char alunos[3][50]; 
    int provas[3][3]; 

    printf("\n>>>Adicione 3 alunos"); 

    for(int i = 0; i < 3; i++) { 

        printf("\n\n---Aluno %i: ", i+1); 
        scanf("%s", alunos[i]); 

        for (int j = 0; j < 3; j++){ 
            printf("\n\nNota %i: ", j+1); 
            scanf("%i",&provas[i][j]); 
        } 
    } 

    for(int i = 0; i < 3; i++) { 

        printf("\n%s", alunos[i]);
        // printf(" \n ",i+1);
        for (int j = 0; j < 3; j++){ 
            printf(" %i ", provas[i][j]); 
        } 
    } 

    return 0; 
} 
