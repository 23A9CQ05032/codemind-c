#include<stdio.h>
int main()
{
    int n,k,x,y,a,b,c,d,e;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    a=k*x;
    b=(n-k)*y;
    c=(n-k)*x;
    d=a+b;
    e=a+c;
    if(d>e) printf("%d",e);
    else printf("%d",d);
}