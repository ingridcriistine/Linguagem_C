//Faça um programa que calcule a média de notas de alunos. cada linha corresponde a média de  um aluno diferente e a coluna são suas notas 

#include <stdio.h> 

// int media(int * n1, int * n2, int * n3) {
//     int r = 0;

//     r = (*n1+*n2+*n3)/3;

//     return r;
// }

int main() { 

    char alunos[3][50]; 
    int provas[3][3];
    int mediaN = 0;

    for(int i = 0; i < 3; i++) { 

        printf("Digite o nome do aluno %i: ", i+1); 
        scanf("%s", &alunos[i]); 

        for(int j = 0; j < 3; j++) { 
            printf("Digite a nota %i: ", j+1); 
            scanf("%i", &provas[i][j]); 
        } 
    } 

    int j = 0;

    for(int i = 0; i < 3; i++) {
        printf("\n\nAluno %i: %s\n", i+1, alunos[i]);
        for(j = 0; j < 3; j++) {
            printf("Nota %i: %i       |", j+1, provas[i][j]);
            mediaN += provas[i][j];
        } 
        
        mediaN /= 3;
        printf("Media do aluno: %d", mediaN);
        mediaN = 0;
    }
} 
