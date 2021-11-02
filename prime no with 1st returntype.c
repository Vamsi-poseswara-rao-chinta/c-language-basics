#include<stdio.h>
int fc(int);
int main()
{

	int i,r,n,count=0;
	scanf("%d",&n);
	r=fc(n);
	if(r==1)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
int fc(int n)
{
	int i,fact=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}return 1;
}
	
