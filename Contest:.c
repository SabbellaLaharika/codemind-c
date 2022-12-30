#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d",&x);
    scanf("%d",&a);
    scanf("%d",&b);
    if((a + 2*b)>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}