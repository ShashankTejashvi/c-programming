#include<stdio.h>

int main() {
    float dollars,rupees,pound;

    printf("Amount in Dollars($) = ");
    scanf("%f", &dollars);

    rupees = dollars * 48;
    pound = rupees/70;

    printf("Amount in pounds = %.2f ",pound );

    return 0;
}
