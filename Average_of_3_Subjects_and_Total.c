#include<stdio.h>

int main() {
    float sub1,sub2,sub3,avg,total;

    printf("Write marks of Subject A :");
    scanf("%f" ,&sub1);
    printf("Write marks of Subject B :");
    scanf("%f" ,&sub2);
    printf("Write marks of Subject C :");
    scanf("%f" ,&sub3);

    total = sub1+sub2+sub3;
    avg = total/3;

    printf("The total of marks of the 3 subjects is %.2f\nThe Average of Marks of the 3 subjects is %.2f", total,avg);

    return 0;
}