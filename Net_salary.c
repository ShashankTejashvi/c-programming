#include<stdio.h>

int main() {
    float gs,allow,deduct,net;

    printf("Input Gross salary :");
    scanf("%f" ,&gs);

    allow = (gs*10.0)/100.0;
    deduct = (gs*3.0)/100.0;
    net = gs + allow -deduct;

    printf("Net salary of gross salary %.2f after adding allowances %.2f and subtracting deduction %.2f = %.2f" , gs,allow,deduct,net);

    return 0;
}