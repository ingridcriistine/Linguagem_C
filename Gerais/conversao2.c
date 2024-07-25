//Faça um programa que disponibilize um menu para converter celsius para fahrenheit ou fahrenheit para celsius. Exiba mensagens de aviso, por exemplo: 
//“Temperatura elevada”. Esse programa deve ser feito utilizando apenas switch e ternário.

#include <stdio.h>  
#include <time.h> 

int main() { 

    int operacao = 0; 
    float temperatura = 0; 

    printf("Digite o numero da operacao que voce quer realizar:\n1- Conversao Celsius para Fahrenheit\n2 - Conversao de Fahrenheit para Celsius\n"); 
    scanf("%i", &operacao); 

    printf("Digite a temperatura que voce deseja converter: "); 
    scanf("%f", &temperatura); 

    float fahrenheit = temperatura*1.8 + 32; 
    float celsius = (temperatura - 32) / 1.8 ; 

    switch(operacao) {  

        case 1 : 
            fahrenheit = (fahrenheit>90) ? printf("%.2f em Celsius equivale a %.2f Fahrenheit. \n!!!!!Temperatura elevada!!!!!", temperatura, fahrenheit) : printf("%.2f em Celsius equivale a %.2f Fahrenheit.", temperatura, fahrenheit);
            break; 

        case 2 :      
            celsius = (celsius>60) ? printf("%.2f em Fahrenheit equivale a %.2f Celsius. \n!!!!!Temperatura elevada!!!!!", temperatura, celsius) : printf("%.2f em Fahrenheit equivale a %.2f Celsius.", temperatura, celsius);
            break; 
    } 

    return 0; 

} 
