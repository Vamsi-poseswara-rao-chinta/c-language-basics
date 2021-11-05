#include<stdio.h>
void main()
{
	int n,res=0;
	scanf("%d",&n);
	res=factorial(n);
	printf("%d",res);
}
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
