#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int b;
    b=m*k;
    if(b>=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}