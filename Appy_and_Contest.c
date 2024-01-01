#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,a,b,k,c=0,d=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(j=1;j<=n;j++)
        {
            if(j%a==0&&j%b!=0)
            {
                c++;
            }
            else if(j%b==0&&j%a!=0)
            {
                d++;
            }
        }
        if((c+d)>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}