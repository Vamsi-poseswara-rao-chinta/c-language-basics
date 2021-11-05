#include<stdio.h>
void main()
{
	int n,res=0;
	scanf("%d",&n);
	res=fact(n);
	printf("%d",res);
}
int fact(int n)
{
	int i,fact=0;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
