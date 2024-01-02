#include<stdio.h>
int main()
{
    int mat[100][100];
    int a,b,i,j,sum=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[a][b]);
            sum=sum+mat[a][b];
        }
    }
   printf("%d ",sum); 
}