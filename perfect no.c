#include<stdio.h>
int main()
{
	int n,i,sum=0,temp;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not Perfect number");
	}
}
