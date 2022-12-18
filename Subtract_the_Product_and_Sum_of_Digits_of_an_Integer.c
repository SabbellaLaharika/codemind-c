#include<stdio.h>
int main()
{
    int i,n,s=0,p=1,ld,res;
    scanf("%d",&n);
    while(n>0)
    {
        ld=n%10;
        s=s+ld;
        p=p*ld;
        n=n/10;
    }
    res=p-s;
    printf("%d",res);
}