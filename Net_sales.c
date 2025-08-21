#include<stdio.h>

int main() {
    float gs,discount,net;

    printf("Input Gross sales :");
    scanf("%f" ,&gs);

    discount = (10*gs)/100;
    net = gs - discount;

    printf("Net sales after removing discount %.2f from gross sales %.2f = %.2f" ,discount,gs,net);

    return 0;
}