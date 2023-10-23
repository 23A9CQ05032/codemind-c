#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int diff = abs(a-b);
	//int diff = a<b?b-a:a-b;
	printf("%d",diff);
}