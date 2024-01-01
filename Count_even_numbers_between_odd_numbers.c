#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0&&i>0&&arr[i-1]%2!=0&&arr[i+1]!=0)
        {
            c++;
        }
    }
            printf("%d",c);
}