#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int w;
    w=21-a-b;
    if(w>=1&&w<=10)
    {
        printf("%d",w);
    }
    else
    {
        printf("-1");
    }
}