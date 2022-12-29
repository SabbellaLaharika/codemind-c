#include<stdio.h>
int main()
{
    int i,j,n,len;
    scanf("%d",&n);
    len = 2*n - 1;
    int val;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            val=i<j?i:j;
            val=val<len-i?val:len-i-1;
            val=val<len-j?val:len-j-1;
            printf("%d ",n-val);
        }
        printf("
");
    }
   return 0; 
}