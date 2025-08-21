#include<stdio.h>

int main() {
    float rupees ,dollars;

    printf("Amount in Rupees = ");
    scanf("%f", &rupees);

    dollars = rupees / 48;

    printf("Amount in dollars = %.2f ",dollars );

    return 0;
}
