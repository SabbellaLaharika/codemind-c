//No. of chocolates
#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int nc;
    nc=(5*x + 10*y)/z;
    printf("%d",nc);
}