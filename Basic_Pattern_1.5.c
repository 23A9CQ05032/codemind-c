#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=65;i<=a+64;i++)
    {
        for(j=65;j<=a+64;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}