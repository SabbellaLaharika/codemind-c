#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n],sum=0,avg,cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        cnt++;
    }
    printf("%d",cnt);
}