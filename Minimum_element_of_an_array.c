#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min;
	min=arr[0];
	for(i=0;i<a;i++)
	{
		if (min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("%d",min);
}