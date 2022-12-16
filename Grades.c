//Grades
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float per;
    per=(a+b+c+d+e)*100/500.0;
    if(per>=90)
    { printf("Grade A"); }
    else if(per>=80)
    { printf("Grade B"); }
    else if(per>=70)
    { printf("Grade C"); }
    else if(per>=60)
    { printf("Grade D"); }
    else if(per>=40)
    { printf("Grade E"); }
    else
    { printf("Grade F"); }
}