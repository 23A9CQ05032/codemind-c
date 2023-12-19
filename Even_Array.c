#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a],flag=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]%2!=0)
        {
            flag=1;
        }
    }
    if(flag==1) printf("False");
    else printf("True");
}