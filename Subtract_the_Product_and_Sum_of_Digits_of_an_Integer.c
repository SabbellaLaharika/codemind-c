#include<stdio.h>
int main()
{
    int n,ld,s=0,p=1,diff;
    scanf("%d",&n);
    while(n!=0)
    {
        ld=n%10;
        s=s+ld;
        p=p*ld;
        n=n/10;
    }
    diff=p-s;
    printf("%d",diff);
}