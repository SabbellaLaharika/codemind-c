#include<stdio.h>
int main()
{
    int n,sn,s=0,ld;
    scanf("%d",&n);
    sn=n*n;
    while(sn>0)
    {
        ld=sn%10;
        s=s+ld;
        sn=sn/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}