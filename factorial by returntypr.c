#include<stdio.h>
int factorial(int);
int main()
{
	int n,r;
	scanf("%d",&n);
	r=factorial(n);
	printf("%d",r);
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++);
	{
		fact=fact*i;
	}
	return fact;
}
