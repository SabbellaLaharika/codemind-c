#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    int sum=0;
    i=0;
    while(i<n)
    {
        if(i%2!=0)
        {
            sum=sum+a[i];
        }
        i++;
    }
    printf("%d",sum);
}