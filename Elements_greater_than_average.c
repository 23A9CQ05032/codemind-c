#include<stdio.h>
int main()
{
    int a,i,sum=0,avg;
    scanf("%d",&a);
    int arr[a], flag =0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/a;
    for(i=0;i<a;i++)
    {
        if(avg<=arr[i])
        {
            flag++;
        }
    }
    printf("%d",flag);
    
}