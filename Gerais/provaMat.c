//Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100 e mostre 
//na tela a pergunta: &quot;Qual é a soma de a + b?&quot;, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno e mostre para ele 
//as perguntas e as respostas corretas, além de quantas vezes o aluno acertou dentro de um arquivo .txt

#include <stdio.h>  
#include <stdlib.h>  
#include <locale.h>  
#include <time.h> 
 
int main() {  

    FILE * arquivo; 

    srand(time(NULL)); 

    int acertos = 0; 
    int erros = 0; 
    int resposta; 
    int i; 

    arquivo = fopen("Respostas.txt", "w"); 

    for(i = 0; i<5; i++) { 

        int num1 = rand() % 100; 
        int num2 = rand() % 100; 
        int resultado = num1+num2; 

        printf("\nQual é a soma de %i + %i? ", num1, num2); 
        scanf("%i", &resposta); 
        fprintf(arquivo, "Resposta %d: %i\n\n", i+1, resultado); 

        if(resposta == resultado){ 

            printf("Você acertou! A resposta era %i", resultado); 
            acertos++; 
        }  

        else { 

            printf("Você errou! A resposta certa era %i", resultado); 
            erros++; 
        } 
    } 

    fprintf(arquivo, "\nNúmero de acertos:%i", acertos); 
    fprintf(arquivo, "\nNúmero de erros:%i", erros); 

    fclose(arquivo); 

    return 0; 
    
} 
