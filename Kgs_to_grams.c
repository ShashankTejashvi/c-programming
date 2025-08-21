#include<stdio.h>

int main() {
    float kg,gram;

    printf("Mass in Kilograms = ");
    scanf("%f", &kg);

    gram = kg*1000 ;

    printf("Mass in gram = %.3f ",gram );

    return 0;
}