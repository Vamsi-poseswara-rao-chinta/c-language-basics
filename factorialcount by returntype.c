#include<stdio.h>
int fact(int);
int main()
{
	int i,n,m;
	scanf("%d",&n);
	m=fact(n);
	printf("%d",m);
}
int fact(int n)
{ 
    int i,fact=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		   fact++;
		}
	}
	return fact;
}
