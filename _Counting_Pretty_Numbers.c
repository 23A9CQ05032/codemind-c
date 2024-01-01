#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       int l,r,j,c=0;
       scanf("%d%d",&l,&r);
       for(j=l;j<=r;j++)
       {
           if(j%10==2||j%10==3||j%10==9)
           {
               c++;
           }
       }
       printf("%d
",c);
    }
}