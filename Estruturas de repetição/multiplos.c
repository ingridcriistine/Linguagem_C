//Exiba para o usuário os múltiplos de um número inserido por ele até 100.

#include <stdio.h>  

int main() {  
    int num; 
    int resultado; 

    printf("\n\nDigite um numero: "); 
    scanf("%i", &num); 
  
    printf("____________Multiplos de %i_____________", num); 

    for(int i = 1; i < 100; i++) { 
        resultado = num / i;
        if(num % i == 0) { 
            printf("\n%i", resultado);
        }   
    } 
}
