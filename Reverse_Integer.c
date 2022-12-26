#include<stdio.h>
int main()
{
    int n,ld,rem=0,rev;
    scanf("%d",&n);
    while(n!=0)
    {
        ld=n%10;
        n=n/10;
        rem=rem*10+ld;
    }
    printf("%d",rem);
}