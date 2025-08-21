#include<stdio.h>

int main() {
    float b,h,area;

    printf("Enter base length of triangle :");
    scanf("%f" ,&b);

    printf("Enter height of triangle");
    scanf("%f" ,&h);
    area = (b*h)/2;

    printf("Area of Triangle = %.2f" ,area);

    return 0;
}