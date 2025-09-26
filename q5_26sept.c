#include<stdio.h>
#include<string.h>
int main() {
char s1[20];
char s2[20];
printf("Enter string :");
scanf("%s",s1);
printf("Enter String 2:");
scanf("%s",s2);
int a = strcmp(s1,s2);
if (a == 0) {
          printf("strings are same");
}
else if (a=1) {
          printf("%s is greater than %s",s2,s1);
}
else if (a=-1) {
          printf("%s is greater than %s",s1,s2);
}
return 0;
}
