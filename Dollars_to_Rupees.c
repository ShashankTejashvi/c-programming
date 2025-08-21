#include<stdio.h>

int main() {
    float dollars ,rupees;

    printf("Amount in Dollars($) = ");
    scanf("%f", &dollars);

    rupees = dollars * 48;

    printf("Amount in rupees = %.2f ",rupees );

    return 0;
}
