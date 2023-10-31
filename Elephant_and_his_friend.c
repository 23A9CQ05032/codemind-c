#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d",&x);
    a=x/5;
    b=(x/5)+1;
    if(x%5==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}