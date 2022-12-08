#include<stdio.h>
#include<math.h>
int main()
{
    double p;
    scanf("%lf",&p);
    double r,t;
    scanf("%lf",&r);
    scanf("%lf",&t);    
    float ci;
    ci=p*pow((1 + r/100),t)-p;
    printf("%0.2f",ci);
}