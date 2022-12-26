#include<stdio.h>
int main()
{
    int n,ld,s=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        ld=sq%10;
        s=s+ld;
        sq=sq/10;
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