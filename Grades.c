#include<stdio.h>
int main()
{
    int p,m,b,c;
    scanf("%d%d%d%d",&p,&m,&b,&c);
    int x=(p+m+b+c)*100/400;
    if (x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }
    else if(x>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}