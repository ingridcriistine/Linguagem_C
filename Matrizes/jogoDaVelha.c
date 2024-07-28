//Desafio: Iniciar um jogo da velha em linguagem C. (não existe apenas uma maneira correta de fazer, isso é bem aberto as suas ideias).

#include <stdio.h> 
#include <stdlib.h> 

void valida(int * l, int * c) {
    int linha; 
    int coluna;

    printf("\nDigite a linha: ");
    scanf("%i", &linha);
    printf("Digite a coluna: ");
    scanf("%i", &coluna);

    if(linha > 3 || coluna > 3) {
        printf("\nValor invalido\n");
        valida(&linha, &coluna);
    }

    *l = linha;
    *c = coluna;
}

// void ocupado(int * m, int * l, int * c) {
//     int linha = *l; 
//     int coluna = *c;
//     if( m[linha][coluna] > 0) {

//     }
// }

int main() { 
    int matriz[3][3];
    int jogar;
    int l;
    int c;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            matriz[i][j] = 0;
        }
    }

    printf("\n-----------JOGO DA VELHA-----------"); 
    printf("\nDigite 1 para jogar ou 0 para sair: "); 
    scanf("%i", &jogar);

    while (jogar == 1) {

        for(int i = 0; i < 3; i++) { 
            printf("\n");

            for (int j = 0; j < 3; j++){ 
                printf(" %i ", matriz[i][j]); 
            } 
        } 

        printf("\n\n----------JOGADOR 1: "); 
        valida(&l, &c);

        if (matriz[l][c] == 2) {
            printf("Posicao ocupada");
            valida(&l, &c);
        }
        else {
            matriz[l-1][c-1] = 1;
        }
        
        for(int i = 0; i < 3; i++) { 
            printf("\n");

            for (int j = 0; j < 3; j++){ 
                printf(" %i ", matriz[i][j]); 
            } 
        } 

        printf("\n\n----------JOGADOR 2: "); 
        valida(&l, &c);

        matriz[l-1][c-1] = 2;
    }
    
    return 0; 
} 
