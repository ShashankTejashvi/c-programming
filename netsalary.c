#include<stdio.h>

int main() {
float allow,deduct,net,gs;

printf("Enter Gross Salary:");
scanf("%f",&gs);

if (gs>10000)
{
    allow=gs*10/100;
    deduct=gs*3/100;
    net=gs+allow-deduct;

    printf("Net Salary =%.2f", net);
}
else (gs>5000)
;{
    allow=gs*7/100;
    deduct=gs*2/100;
    net=gs+allow-deduct;

    printf("Net salary =%.2f", net);
}

return 0;
}
