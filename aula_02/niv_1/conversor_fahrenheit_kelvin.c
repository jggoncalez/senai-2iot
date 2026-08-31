#include <stdio.h>

int main(){
    float temp, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temp);

    kelvin = temp + 273;
    fahrenheit = (temp * 9/5) + 32;

    printf("Fahrenheit: %.2f\nKelvin: %.2f\n", fahrenheit, kelvin);

    return 0;
}