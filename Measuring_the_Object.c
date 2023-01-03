#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    int a,b,c,d;
    a=x+y+z;
    b=x+z;
    c=x+y;
    d=y+z;
    if(w==a||w==b||w==c||w==d||w==z||w==x||w==y)
    printf("YES");
    else
    printf("NO");
}