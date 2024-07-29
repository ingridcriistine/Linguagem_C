//Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e telefone de 5 pessoas e os imprima em ordem alfabética.

#include <stdio.h> 
#include <string.h> 

typedef struct { 

    char nome[50]; 
    char endereco[100]; 
    char telefone[10]; 

} Pessoa;
 
int main() { 

    Pessoa pessoa[5]; 
    int cmp;
    char menor[50];
    char maior[50];
    char aux[50];

    for(int i = 0; i < 5; i++) { 

        printf("\n\n>>>>> Pessoa %i", i+1); 

        printf("\nNome: "); 
        scanf(" %s", &pessoa[i].nome);
 
        printf("\nEndereco: "); 
        scanf(" %s", &pessoa[i].endereco); 

        printf("\nTelefone: "); 
        scanf(" %s", &pessoa[i].telefone); 
    } 

    // if (cmp == 0) /* n1 igual a n2 */;
    // if (cmp < 0) /* n1 menor que n2 */;
    // if (cmp > 0) /* n1 maior que n2 */;
    
    //print dos valores do vetor 
    Pessoa temp;
    for(int i = 0; i < 5; i++) { 
        for(int j = 0; j < 4; j++) {

            cmp = strcmp(pessoa[j].nome, pessoa[j+1].nome);

            if(cmp > 0) {

                temp = pessoa[j+1];
                pessoa[j+1] = pessoa[j];
                pessoa[j] = temp;
            }
        }
    } 

    printf("\n\n------------Alunos-----------");

    for(int i = 0; i < 5; i++) { 
        printf("\n%s", pessoa[i].nome);
    }
} 
