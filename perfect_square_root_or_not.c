#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int isr;
    float fsr;
    fsr=sqrt(n);
    isr=fsr;
    if(fsr==isr)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
