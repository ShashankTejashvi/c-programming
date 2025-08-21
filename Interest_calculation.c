#include<stdio.h>

int main() {
    float I,P,R,N;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("\nEnter Rate of Interest:");
    scanf("%f" ,&R);

    printf("\nEnter number of time periods: ");
    scanf("%f", &N);

    I = P*(R/100.0)*N ;

    printf("Interest on Principal %f at rate %f for %f number of time period = %f " ,P,R,N,I);
    return 0;
}