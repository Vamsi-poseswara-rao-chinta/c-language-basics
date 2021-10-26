#include<stdio.h>
int main()
{
	int n,r,last,sum=0;
	scanf("%d",&n);
	last=n%10;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
	}
	sum=r+last;
	printf("%d",sum);
}
