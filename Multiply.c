#include<stdio.h>

int main() {
    int num1, num2, multiply;

    printf(" Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    multiply = num1 * num2;
    
    printf("The result of multiplication : %d\n", multiply);

return 0;
}