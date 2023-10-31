#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=b-(a%b);
    if(a%b!=0)
    {
        printf("%d",x);
    }
    else
    {
        printf("0");
    }
}