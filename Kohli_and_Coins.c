#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a,b;
    a=x/5;
    b=x/10;
    if(x%5==0)
    {
        if(x%10==0)
        printf("%d",b);
        else
        printf("%d",b + 1);
    }
    else
    printf("-1");
}