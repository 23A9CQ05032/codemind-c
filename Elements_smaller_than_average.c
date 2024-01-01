#include<stdio.h>
int main()
{
    int i,n,c=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        c=c+arr[i];
    }
    float avg=c/n;
    for (i=0;i<n;i++)
    {
        if (arr[i]<=avg)
        {
            d++;
        }
    }
            printf("%d",d);
}