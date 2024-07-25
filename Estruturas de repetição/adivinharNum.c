//Faça um programa para adivinhar um número entre 1 e 1000. Este valor pode ser definido automaticamente, ou randomizado utilizando uma função rand.

#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main() {
  
    srand(time(NULL));
    int num = rand() % 1000;
    int tentativa;
  
    printf("\n\n-------------- Adivinhe o número de 0 a 1000 --------------");
    printf("\n%i";, num);
    
    while(tentativa != num) {
      
        printf("\nDigite o seu palpite: ");
        scanf("%i";, &tentativa);
      
        if(tentativa != num) {
            printf("Voce errou!");
        }
          
        else {
            printf("Voce acertou!");
            break;
        }
    }
}
