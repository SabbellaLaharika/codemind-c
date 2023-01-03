#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int es=0,os=0,diff;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        es=es+a[i];
        else
        os=os+a[i];
    }
    diff=abs(es-os);
    printf("%d",diff);
}