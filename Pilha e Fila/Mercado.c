//Um supermercado chamado Gulinha gostaria de um pequeno sistema para treinar os novos funcionários. Trata-se de um simulador das filas em determinados momentos do dia. O seu programa deverá:
//Exibir a quantidade de pessoas dentro da fila(Elementos)
//Permitir a entrada de novas pessoas dentro da fila(De maneira que há chance de entrar na fila ou não)
//Ao acabar a fila, encerrar o programa.
//Há uma chance de uma pessoa desistir da fila, assim saindo dela.
//Exibir mensagens como "Compra finalizada", "Fim da fila, programa encerrando"
//Das 8:00 até as 17:00 o movimento é menor. Das 17:00 as 22:00 o movimento cresce de maneira considerável.

#include "Funcoes.h"
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {

    Queue queue = construct_();
    srand(time(NULL));
    int menor = rand() % 20;
    int maior = rand() % 50;


    while (menor > 0 && maior > 20)
    {
        //tamanho da fila das 8h às 17h
        for(int i = 0; i < menor; i++) {
            Enqueue(&queue, i+1);

            if(queue.size > 2) {
                sleep(1);
                printf("\nPessoa %i | Compra finalizada", i);
                Dequeue(&queue);
            }

            //desistiu da fila
            if(queue.size < menor/2) {
                Dequeue(&queue);
                printf("Pessoa %i desistiu da fila.", i);
            }
        }


        //tamanho da fila das 17h às 22h
        for(int i = 0; i < maior; i++) {
            Enqueue(&queue, i+1);

            //desistiu da fila
            if(maior == menor/2) {
                Dequeue(&queue);
            }
        }

        //se acabar a fila, encerra o programa
        if(queue.size == 0) {
            break;
        }
    }

    printf("\n\n----------SUPERMERCADO GULINHA-----------");
    printf("\n           Simulador de filas            ");

    printf("\n\nTamanho da fila: %i", menor);
    printf("\n\nTamanho da fila: %i", maior);
    printf("\n\n%i", &queue);

}
