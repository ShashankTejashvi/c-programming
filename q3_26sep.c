#include<stdio.h>
#include<string.h>
int main() {
char s[20];
printf("Enter string:");
scanf("%s",s);

printf("%s",strrev(s));

return 0;
}
