#include<stdio.h>
#include<math.h>
int main()
{
    int np;
    scanf("%d",&np);
    int r,nc;
    r=np%4;
    nc=np/4;
    if(r==0)
    {
       printf("%d",nc); 
    }
    else
    {
        printf("%d",nc + 1);
    }
}