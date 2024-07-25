//Faça uma conversão de celsius para fahrenheit, exiba essa conversão, e logo após exiba a conversão do resultado anterior para kelvin

int main() {
    float celsius = 30;
    float fahrenheit = celsius*1.8 + 32;
    float conversaoF = fahrenheit;
    float kelvin = ((fahrenheit - 32) /1.8) + 273.15;
    float conversaoK = kelvin;
    float conversaoC = kelvin - 273.15;

    setlocale(LC_ALL, "Portuguese");
    printf("%.2f graus Celsius equivalem a %.2f Fahrenheit.", celsius, conversaoF);

    printf("\n%.2f Fahrenheit equivalem a %.2f Kelvin.", conversaoF, conversaoK);

    printf("\n%.2f Kelvin equivalem a %.2fº Celsius.", conversaoK, conversaoC);

    return 0;
}
