#include<stdio.h>
int main()
{
    int i,c,s,k,n;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        if(i%2==0)
        {
            c++;
            int s=0;
            if(a[i]%2==0)
            {
                s++;
            } 
        }
        else
        {
            k=0;
            if(a[i]%2==0)
            {
                k++;
            }
        }
    }
    if(c==s && k==0)
    printf("True");
    else if(k>0)
    printf("False");
}