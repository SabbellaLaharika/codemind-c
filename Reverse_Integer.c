#include<stdio.h>
int main()
{
    long long int n,r,s=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("%lld",s);
}