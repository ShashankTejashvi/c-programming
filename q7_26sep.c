#include<stdio.h>
#include<string.h>
int main() {
char s[20];
char s2[20];
printf("Enter string:");
scanf("%s",s);
strcpy(s2,s);
strrev(s2);
int a = strcmp(s,s2);
if (a==0) {
printf("%s is a Palindrome",s);
}
else {
          printf("%s is not a palindrome",s);
}

return 0;
}
