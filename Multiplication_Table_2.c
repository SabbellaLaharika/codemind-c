#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        int mt;
        mt=n*i;
        printf("%d x %d = %d
",n,i,mt);
    }
}