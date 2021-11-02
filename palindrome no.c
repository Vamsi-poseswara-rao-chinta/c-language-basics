#include<stdio.h>
int main()
{
	int n,r,sum=0,v;
	scanf("%d",&n);
	v=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	
	}
	if(sum==v)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
		
	
}
