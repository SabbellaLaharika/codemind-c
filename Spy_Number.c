#include<stdio.h>
int main()
{
    int i,n,ld,s=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
       ld=n%10;
       s=s+ld;
       p=p*ld;
       n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}