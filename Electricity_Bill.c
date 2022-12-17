//Current Bill
#include<stdio.h> 
#include<math.h>
int main()
{
    int n;    //n=units
    scanf("%d",&n);
    printf("Units Consumed: %d
",n);
    float c;       //c=charge
    if (n<200)
    { c=1.20; }
    else if (n>=200&&n<400)
    { c=1.40; }
    else if (n>=400&&n<600)
    { c=1.60; }
    else if(n>=600&&n<800)
    { c=1.80; }
    else 
    { c=2.00; }
    printf("Cost per Unit: %0.2f
",c);
    float b,sc,amt;      //b=bill,sc=surcharge,amt=total bill
    b=n*c;
    printf("Bill: %0.2f
",b);
    if (b>400)
    { sc=b*0.15; }
    printf("Surcharge: %0.2f
",sc);
    amt=b+sc;
    printf("Total Amount: %0.2f
",amt);
}