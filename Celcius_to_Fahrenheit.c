#include<stdio.h>

int main() {
    double celcius, fahrenheit;

    printf("Temperature in Celcius:");
    scanf("%f" ,&celcius);

    fahrenheit = celcius*(9.0/5.0) + 32.0;

    printf("Temperature in Fahrenheit:%.2f" ,fahrenheit);

    return 0;
}