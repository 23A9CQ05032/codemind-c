#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    float c,s,b,t;
    if(x<199)
    {
        c=1.20;
        b=x*c;
        s=100;
    }
    else if(x>=200&&x<400)
    {
        c=1.50;
        b=x*c;
        s=100;
    }
    else if(x>=400&&x<600)
    {
        c=1.80;
        b=x*c;
        s=b*15/100;
    }
    else
    {
        c=2.00;
        b=x*c;
        s=b*15/100;
    }
    t=s+b;
    printf("%.2f",t);
}