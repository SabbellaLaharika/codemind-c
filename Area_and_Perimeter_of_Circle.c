//Area and Perimeter of a Circle
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    float area,peri;
    area= 3.14*r*r;
    peri= 2*3.14*r;
    printf("%0.2f
%0.2f",area,peri);
}