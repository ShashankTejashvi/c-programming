#include<stdio.h>

int main() {
    int num1, num2, divide;

    printf(" Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

   divide = num1 / num2;
    
    printf("Division : %d\n", divide);

return 0;
}