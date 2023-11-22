#include<stdio.h>
int main()
{
    int a,b,i,as=0,bs=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            as=as+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(a%b==0)
        {
            bs=bs+i;
        }
    }
    if((a==bs)||(b==as))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}