#include<stdio.h>
int main()
{
	int a,i,flag=0;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int search;
	scanf("%d",&search);
	for(i=0;i<a;i++)
	{
		if (search==arr[i])
		{
			flag=1;
			break;
		}
	}
	if (flag==1) printf("True");
	else printf("False");
}