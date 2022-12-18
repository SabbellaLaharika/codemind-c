#include<stdio.h>
int main()
{
    int i,n,temp,s=0,p=1,ld;
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        s=s+ld;
        p=p*ld;
        n=n/10;
    }
    if(p==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}