#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=a+b;
    int y=21-x;
    if(y>10) printf("-1");
    else printf("%d",y);
}