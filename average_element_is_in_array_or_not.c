#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=(float)sum/n;
    int count=0;
    for(i=0;i<n;i++)
    {
        if((int)avg==a[i])
        count++;
    }
    if(count>0)
    printf("True");
    else
    printf("False");
}