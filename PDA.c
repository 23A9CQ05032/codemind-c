#include<stdio.h>
int main()
{
    int t,i,c=0;
    scanf("%d",&t);
    for(i=1;i<=t/2;i++)
    {
        if(t%i==0)
        {
            c=c+i;
        }
    }
    if(t==c)
    {
        printf("PERFECT");
    }
    else if(t<c)
    {
        printf("ABUNDANT");
    }
    else
    {
        printf("DEFICIENT");
    }
}