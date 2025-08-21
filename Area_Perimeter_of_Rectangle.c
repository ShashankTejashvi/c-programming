#include<stdio.h>

int main() {
    float area ,l,b ,perimeter;

    printf("Enter length of rectangle : ");
    scanf("%f" ,&l);

    printf("Enter Breadth of rectangle : ");
    scanf("%f" ,&b);

    area = l * b;
    perimeter = 2*l*b;

    printf(" Area of rectangle = %.2f\n Perimeter of rectangle = %.2f" ,area,perimeter);

    return 0;
}