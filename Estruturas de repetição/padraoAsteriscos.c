//Faça um programa que faça um padrão de asteriscos, como um triângulo ou um retângulo até um valor máximo de 20. Se passar disso deve bloquear a execução.

#include <stdio.h>  

int main() {  
  
    char sim; 
    printf("\n\nDigite um simbolo: "); 
    scanf("%c", &sim); 

    for(int i = 0; i < 21; i++) { 
        printf("\n");
        for(int j = 0; j < i; j++) {
            j * sim;
            printf("%c", sim);
        }
    } 
}
