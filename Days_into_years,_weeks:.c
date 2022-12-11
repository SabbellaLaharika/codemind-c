//Days into years and weeks
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int yr,wk;
    yr=a/365;
    wk=(a - 365*yr)/7;
    printf("%d
%d",yr,wk);
}