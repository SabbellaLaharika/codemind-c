#include<stdio.h>
int main()
{
    int n,ld,q,rev=0;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        ld=n%10;
        n=n/10;
        rev=rev*10+ld;
    }
    if(q==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}