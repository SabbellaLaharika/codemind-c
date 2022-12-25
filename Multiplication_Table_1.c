#include<stdio.h>
int main()
{
    int i,mt,n;
    scanf("%d",&n);
    for(i=1;i<13;i++)
    {
        mt=n*i;
        printf("%d x %d = %d
",n,i,mt);
    }
}