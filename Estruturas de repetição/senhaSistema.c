//Faça um programa que bloqueie a entrada de números e apenas permita a passagem se a senha for igual a do sistema.

#include <stdio.h>
#include <string.h>

int main()
{
    char senhaSistema[] = {"vida"};
    char senha[5] = {""}; 
    int flag = 1;
   
    while (flag != 0)
    { 
        printf("\n\nDigite a senha do sistema: ");
        scanf("%s", senha);

        if (strcmp(senha, senhaSistema) == 0)
        {
            printf("\nSenha correta!");
            flag = 0;
        }
        else{
            printf("senha incorreta");
        }
    }
}
