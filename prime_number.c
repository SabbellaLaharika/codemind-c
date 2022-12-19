#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        f++;
    }
    if(f==2)
    printf("prime");
    else
    printf("not a prime");
}