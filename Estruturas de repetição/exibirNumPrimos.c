//Encontrar e exibir todos os números primos entre 1 e 100.

#include <stdio.h>  

int main() {  
 
    int cont = 0; 

    printf("____________Numeros Primos 1 - 100_____________"); 

    for(int i = 0; i < 100; i++) { 
        cont = 0;
      
        for(int j = 1; j <=100; j++) {
            if(i % j == 0) { 
                cont++; 
            } 
        }

        if(cont <= 2) {
            printf("\n%i", i); 
        }
    } 
}
