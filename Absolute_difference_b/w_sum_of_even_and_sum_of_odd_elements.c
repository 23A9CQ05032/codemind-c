#include<stdio.h>
int main()
{
    int i,n,c=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            c=c+arr[i];
        }
        else 
        {
            d=d+arr[i];
        }
    }
    int dif;
    if(c>d)
    {
        dif=c-d;
    }
    else
    {
        dif=d-c;
    }
            printf("%d",dif);
}