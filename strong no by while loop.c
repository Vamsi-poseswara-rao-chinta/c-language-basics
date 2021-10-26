#include<stdio.h>
int main()
{
	int i,temp,n,sum=0,r,fact;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		i=1;
		fact=1;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	printf("%d",sum);
	if(sum==temp)
	{
		printf("Strong number");
	}
	else
	{
		printf("Not strong number");
	}
}
