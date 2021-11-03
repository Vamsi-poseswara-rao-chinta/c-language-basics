#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(prime(n))
	{
		printf("Prime\n");
		if(megaprime(n)==1)
		{
			printf("Mega prime");
		}
		else
		{
			printf("Not Mega prime");
		}
	}
	else
	{
		printf("Not Prime");
	}
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int megaprime(int n)
{
	while(n!=0)
	{
		if(prime(n%10)==0)
		{
			return 0;
		}
		n=n/10;
	}
	return 1;
}
