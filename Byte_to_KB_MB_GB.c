#include<stdio.h>

int main() {
    float byte, kb, mb, gb;

    printf("Data in bytes = ");
    scanf("%f", &byte);

    kb = byte / 1024.0;
    mb = byte / (1024.0 * 1024.0);
    gb = byte / (1024.0 * 1024.0 * 1024.0);

    printf("Data in KB = %.3f\nData in MB = %.3f\nData in GB = %.7f\n",kb, mb, gb);

    return 0;
}
