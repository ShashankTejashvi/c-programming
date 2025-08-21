#include<stdio.h>

int main() {
    float gram ,kg;

    printf("Mass in Grams = ");
    scanf("%f", &gram);

    kg = gram/1000 ;

    printf("Mass in kg = %.3f ",kg );

    return 0;
}
