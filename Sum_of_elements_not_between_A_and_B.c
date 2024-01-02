#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    double arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            c=c+arr[i];
        }
    }
    printf("%d",c);
}