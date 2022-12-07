#include<stdio.h>
int main()
{
    int fahr;
    scanf("%d",&fahr);
    float cel;
    cel = (5/9.0)*(fahr - 32);
    printf("%0.2f",cel);
}