//Pass or Fail
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    if(a>=35&&b>=35&&c>=35&&d>=35&&e>=35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}