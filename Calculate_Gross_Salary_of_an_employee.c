//Gross Salary of an Employee
#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f",&bs);
    scanf("%f",&hra);
    scanf("%f",&da);
    float pf,gs;
    pf=0.12*bs;
    gs=bs+hra+da+pf;
    printf("%0.2f
%0.2f",pf,gs);
}