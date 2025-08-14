#include<stdio.h>

int main() {
    int num1, num2, difference;

    printf("first number : ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    difference = num1-num2;
    
    printf("This is my difference : %d\n", difference);

return 0;
}