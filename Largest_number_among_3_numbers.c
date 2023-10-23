#include<stdio.h>
int main()
{
	int a,b,c,lar;
	scanf("%d%d%d",&a,&b,&c);
	lar = (a>b&&a>c) ? a:(b>c&&b>a) ? b:c;
	printf("%d",lar);
}