#include<stdio.h>
int is_prime(int n)
{
	int fc=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i==0) fc++;
	}
	if(fc==2) return 1;
	else return 0;
}
int reverse(int n)
{
	int rev=0,r;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
int get_next_prime_palindrome(int n)
{
	while(1)
	{
		if(n==reverse(n)&&is_prime(n)) break;
		else n++;
	}
	return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",get_next_prime_palindrome(n+1));
}