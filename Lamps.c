#include<stdio.h>
int main()
{
    int n,k,x,y,minc;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n==k)
    {
        minc=n*x;
    }
    else 
    {
        if(x<y)
        {
            minc=n*x;
            
        }
        else
        {
            minc=k*x+(n-k)*y;
        }
    }
    printf("%d",minc);
}