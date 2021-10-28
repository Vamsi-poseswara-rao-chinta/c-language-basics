#include<stdio.h>
int main()
{
	int n,s,r,sum=0;
	scanf("%d",&n);
	s=n*n;
	while(s!=0)
	{
		r=s%10;
		sum=sum+r;
		s=s/10;
	}
	if(n==sum)
	{
		printf("Spy number");
	}
	else
	{
		printf("not Spy number");
	}
	
}
