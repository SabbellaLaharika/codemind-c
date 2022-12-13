#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        f=a+b;
        a=b;
        b=f;
    }
}