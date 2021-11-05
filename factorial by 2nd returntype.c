#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	fact(n);
}
fact(int n)
{
	int fact=1,i;
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
