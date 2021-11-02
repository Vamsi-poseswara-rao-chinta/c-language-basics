#include<stdio.h>
int fc(int);
void main()
{

	int rev,n,fc=0;
	scanf("%d",&n);
	fc=factorcount(n);
	if(fc==2)
	{
		printf("prime number\t");
		rev=reverse(n);
		fc=factorcount(rev);
		if(fc==2)
		{
			printf("Circular Prime");
		}
		else
		{
			printf("Not Circular Prime");
		}
	}
	else
	{
		printf("not prime number");
	}
}
int factorcount(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}return count;
}
int reverse(int n)
{
	int r,sum;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
return sum;
}
