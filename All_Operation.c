#include<stdio.h>

int main() {
    int num1, num2, sum,difference,multiply,divide;

    printf(" Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    multiply = num1 * num2;
   divide = num1 / num2;
    
    printf(" Addition : %d\n Difference : %d\n Multiplication : %d\n Division : %d\n", sum,difference,multiply,divide);

return 0;
}