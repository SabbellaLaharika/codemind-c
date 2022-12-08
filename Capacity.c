#include<stdio.h>
int main()
{
    int s,t,b;
    scanf("%d",&t);
    scanf("%d",&s);
    scanf("%d",&b);
    int cap,tc;
    cap=2*s*t*b*512;
    tc=cap/1024;
    printf("%dkb",tc);
}