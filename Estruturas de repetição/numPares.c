//Faça um programa que imprima todos os números pares até o valor que foi inserido pelo usuário.

int main() { 
  
    int limite;

    printf("Digite um valor: ");
    scanf("%i", &limite);

    for(int i = 0; i < limite+1; i++) {
        if(i % 2 == 0) {
            printf("%i\n", i);
        }
    }
}
