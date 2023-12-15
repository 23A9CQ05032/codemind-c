#include<stdio.h>
int main()
{
    int i,j,n,a,b,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a=i+j,b=n+1;
            if(a<=b)
            {
                printf("%d",k);
            }
            else
            {
                printf("*");
            }
        }
        printf("
");
        k--;
    }
}