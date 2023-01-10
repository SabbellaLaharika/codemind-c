#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||j+i==n-1)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
}