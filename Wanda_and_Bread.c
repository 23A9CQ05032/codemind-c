#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=b*c;
    if(x>=a) printf("YES");
    else printf("NO");
}