#include<stdio.h>
int main()
{
    int i,n,a=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        a*=i;
    }
    printf("%d",a);
}