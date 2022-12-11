//Integer to hours, minutes and seconds
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h,m,s;
    h=a/3600;
    m=(a - 3600*h)/60;
    s=a - 3600*h - 60*m;
    printf("H:M:S-%d:%d:%d",h,m,s);
}