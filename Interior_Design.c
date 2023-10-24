#include<stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int c=x+y;
    int d=a+b;
    if(c<d)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",d);
    }
}