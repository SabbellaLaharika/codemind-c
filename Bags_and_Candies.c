#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int b,p,nb;
    p=k*m;
    b = n%p;
    nb = n/p;
    if(b==0)
    printf("%d",nb);
    else
    printf("%d",nb + 1);
}