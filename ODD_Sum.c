#include<stdio.h>
int main()
{
    int n,i,os=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        os=os+a[i];
    }
    printf("%d",os);
}