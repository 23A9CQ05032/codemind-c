#include<stdio.h>
int main()
{
    int n,i,ds=0,s,diff,s2=0,sq;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=i*i;
      ds=ds+s;
      s2=s2+i;
      sq=s2*s2;
    }
    printf("%d",sq-ds);
}