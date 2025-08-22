#include<stdio.h>

int main() {
int a,b,c;

printf("Enter Numbers A B C : ");
scanf("%d %d %d" ,&a ,&b ,&c);

if (a>b && b>c)
{ printf("%d is smallest \n%d is greatest" ,c,a);}

else (c>b && a>c)
;{
    printf("%d is greatest \n%d is smallest\n" ,a,b);
}
if (b>a && a>c)
{
    printf("%d is greatest \n%d is smallest" ,b,c);
}
else (b>c && c>a)
;{
    printf("%d is greatest \n%d is smallest\n" ,b,a);
}
if (c>a && b>a)
{
    printf("%d is greatest \n%d is smallest" ,c,a);
}
    else(c>b && b>a)
;{
        printf("%d is greatest \n%d is smallest" ,c,b);
}

return 0;
}
