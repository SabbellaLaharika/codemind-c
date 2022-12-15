//Minutes to hrs and min
#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int hr,min;
    hr=m/60;
    min= m - 60*hr;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}