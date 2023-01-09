#include<stdio.h>
int main()
{
    int n,i,c,s,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        s=0;
        if(i%2!=0)
        {
            c++;
            if(a[i]%2!=0)
            {
                s++;
            }
        }
        else if(i%2==0)
        {
            k=0;
            if(a[i]%2!=0)
            {
                k++;
            }
        }
    }
    if(c==s&&k==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}