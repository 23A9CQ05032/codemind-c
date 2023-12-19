#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a], flag = 1;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]%2!=0)
        {
            if(i%2==0)
            { 
            flag = 0;
            break;
            }
        }
    }
    if(flag==1) printf("True");
    else printf("False");
}