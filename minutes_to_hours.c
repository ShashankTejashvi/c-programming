#include<stdio.h>

int main() {
float minutes,divide;

printf("Number of minutes: ");
scanf("%f", &minutes);

divide = minutes / 60;

printf("%.2f Minutes = %.2f Hours", minutes, divide);

return 0;
}