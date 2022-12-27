#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,ss=0,ssf=0,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
        ss=ss+i*i;
        ssf=s*s;
    }
    abs (diff=ssf-ss);
    printf("%d",diff);
}