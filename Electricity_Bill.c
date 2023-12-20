#include<stdio.h>
int main()
{
    float u;
    scanf("%f",&u);
    float c,b,s,t;
    if(u<=199)
    {
        c=1.20;
        b=u*c;
        s=0;
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
        b=u*c;
        s=0;
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
        b=u*c;
        s=15*b/100;
    }
    else if (u>=600&&u<800)
    {
        c=1.80;
        b=u*c;
        s=15*b/100;
    }
    else 
    {
        c=2.00;
        b=u*c;
        s=15*b/100;
    }
    t=b+s;
    printf("Units Consumed: %.0f
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f
",u,c,b,s,t);
}