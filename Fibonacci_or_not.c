#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,f,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=a+b;
        if(f==n)
        {
            cnt++;
            break;
        }
        a=b;
        b=f;
    }
    if(cnt!=0)
    {
       printf("True"); 
    }
    else
    {
        printf("False");
    }
}