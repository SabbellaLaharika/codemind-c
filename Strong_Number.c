#include<stdio.h>
int main()
{
    int n,temp,rem,s=0,f,i;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        f=1,i=1;
        rem=temp%10;
        while(i<=rem)
        {
            f=f*i;
            i++;
        }
        s=s+f;
        temp=temp/10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}