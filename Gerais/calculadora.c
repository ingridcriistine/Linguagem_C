//Faça uma calculadora de operadores lógicos, onde o usuário irá inserir dois valores e calcular utilizando o or, not, xor, and, left shift(leia a quantidade de
//números a serem movidos), right shift(leia a quantidade de números a serem movidos). Cada calculo em um diferente arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    int a; // Representação binária: 00000000 00000000 00000000 00001010
    int b;  // Representação binária: 00000000 00000000 00000000 00000101

    printf("Digite o primeiro valor: ");
    scanf("%i", &a);

    printf("Digite o segundo valor: ");
    scanf("%i", &b);

    // Operador NOT (~)
    int not_a = ~a; // Representação binária: 11111111 11111111 11111111 11110101

    // Operador AND (&)
    int and_result = a & b; // Resultado: 00000000 00000000 00000000 00000000

    // Operador XOR (^)
    int xor_result = a ^ b; // Resultado: 00000000 00000000 00000000 00001111

    // Operador OR (|)
    int or_result = a | b; // Resultado: 00000000 00000000 00000000 00001111

    // Operador Shift Left (<<)
    int shift_left_result = a << 1; // Resultado: 00000000 00000000 00000000 00010100

    // Operador Shift Right (>>)
    int shift_right_result = a >> 1; // Resultado: 00000000 00000000 00000000 00000101

    // Exibindo resultados
    printf("NOT (~a): %d\n", not_a);
    printf("AND (a & b): %d\n", and_result);
    printf("XOR (a ^ b): %d\n", xor_result);
    printf("OR (a | b): %d\n", or_result);
    printf("Shift Left (a << 1): %d\n", shift_left_result);
    printf("Shift Right (a >> 1): %d\n", shift_right_result);

    return 0;

}
