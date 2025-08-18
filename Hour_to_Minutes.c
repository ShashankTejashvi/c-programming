#include<stdio.h>

int main() {
int hours,multiply;

printf("No. of hours:");
scanf("%d", &hours);

multiply = hours * 60;

printf("%d hours = %d Minutes", hours, multiply);

return 0;
}