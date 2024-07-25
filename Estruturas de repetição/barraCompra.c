//Faça um programa que exiba uma barra de carregamento para processar uma compra de um determinado produto.

#include <stdio.h> 

int main() { 
    int produto = 0;
    int carregamento = 0;

    printf("\nDigite o id do produto que você quer comprar: ");
    printf("\n\n1 - Jaqueta");
    printf("\n2 - Camiseta");
    printf("\n3 - Calca");
    printf("\n4 - Regata");
    printf("\n5 - Shorts\n");

    scanf("%i", &produto);

    while(produto>0) {
        printf("\nCarregando\n");
        while(carregamento<15) {
            sleep(1);
            printf("-");
            carregamento = carregamento + 1;
        }
        printf("\nPedido concluido!");
        break;
    }
}
