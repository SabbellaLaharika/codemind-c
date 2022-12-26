#include<stdio.h>
int main()
{
    int a,b,i,sn=0,cn=0;
    scanf("%d%d",&a,&b);
    for(i=a + 1;i<b;i++)
    {
        sn=i*i;
        cn=i*i*i;
        printf("%d %d %d
",i,sn,cn);
    }
}