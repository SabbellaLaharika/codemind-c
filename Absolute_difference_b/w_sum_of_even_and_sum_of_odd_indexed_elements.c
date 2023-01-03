#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int eis=0,ois=0,diff;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        eis=eis+a[i];
        else
        ois=ois+a[i];
    }
    diff=abs(eis-ois);
    printf("%d",diff);
}