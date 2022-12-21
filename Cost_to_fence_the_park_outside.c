#include<stdio.h>
int main()
{
    int l,b,d,c;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    int area,tc;
    area=(l + 2*d)*(b + 2*d)-l*b;
    tc=c*area;
    printf("%d",tc);
}