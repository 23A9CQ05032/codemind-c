#include<stdio.h>
int main()
{
    int mat[100][100];
    int i,j,a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        int sum=0;
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
            sum=sum+mat[i][j];
        }
          printf("%d ",sum);
    }
  
}