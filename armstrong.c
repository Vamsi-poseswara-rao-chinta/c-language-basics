#include<stdio.h>
int main()
{
	int num,n,r,sum=0;
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(n==sum)
	{ 
	printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");	
	}
	
}
