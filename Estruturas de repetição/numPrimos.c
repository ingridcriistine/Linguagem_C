//Escreva um código onde será identificado os números primos até o valor inserido pelo usuário.

#include <stdio.h>  

int main() {  
    int limite; 
    int cont = 0; 

    printf("____________Numeros Primos_____________"); 
    printf("\n\nDigite um limite: "); 
    scanf("%i", &limite); 

    for(int i = 0; i < limite; i++) { 
        
        cont = 0;
        
        for(int j = 1; j <=limite; j++) {
            if(i % j == 0) { 
                cont++; 
            } 
        }

        if(cont <= 2) {
            printf("\n%i", i); 
        }
    } 
}
