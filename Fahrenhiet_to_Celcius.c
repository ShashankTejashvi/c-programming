#include<stdio.h>

int main() {
    double celcius, fahrenheit;

    printf("Temperature in Fahrenheit:");
    scanf("%lf" ,&fahrenheit);

    celcius = (fahrenheit - 32.0)*(5.0/9.0);

    printf("Temperature in Celcius:%.2lf" ,celcius);

    return 0;
}