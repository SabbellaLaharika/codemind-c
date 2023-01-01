#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ab,bc,ca;
    ab=a+b;
    bc=b+c;
    ca=c+a;
    if(ab>bc)
    {
        if(ab>ca)
        printf("%d",ab);
        else
        printf("%d",ca);
    }
    else
    {
        if(bc>ca)
        printf("%d",bc);
        else
        printf("%d",ca);
    }
}