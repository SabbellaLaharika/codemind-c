#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b;
    float sr,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sr=sqrt(i);
        s=s+sr;
    }
    printf("%0.2f",s);
}