#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=b*c;
    int y=a/x;
    int z=y+1;
    if(a%x==0) printf("%d",y);
    else printf("%d",z);
}