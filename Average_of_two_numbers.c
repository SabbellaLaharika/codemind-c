#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    float avg;
    avg = (a+b)/2.0;
    printf("Average of %d and %d is: %0.2f",a,b,avg);
}