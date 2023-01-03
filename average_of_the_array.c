#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0;
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    int sum=0;
    i=0;
    while(i<n)
    {
        sum=sum+a[i];
        i++;
    }
    float avg;
    avg=(float)sum/n;
    printf("%0.2f",avg);
}