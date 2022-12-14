//Area of a Trapezium
#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&h);
    float area;
    area = (a+b)*h/2.0;
    printf("%0.4f",area);
}