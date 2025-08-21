#include<stdio.h>

int main() {
    float area ,side ,perimeter;

    printf("Enter side length : ");
    scanf("%f" ,&side);

    area = side * side;
    perimeter = 4 * side;

    printf(" Area of square of side %f = %.2f\n Perimeter of square of side %f = %.2f" ,side,area,side,perimeter);

    return 0;
}