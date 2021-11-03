#include<stdio.h>
int main()
{
	int n,res=0,r,rev=0;
	scanf("%d",&n);
	res=factor_count(n);
	if(res==2)
	{
		printf("Prime\n");
		while(n!=0)
		{
			r=n%10;
			rev=factor_count(r);
			n=n/10;
		}
			if(rev==2)
			{
				printf("Mega prime\n");
			}
			else
			{
				printf("Not Mega prime");
			}
    }
	
	else
	{
		printf("not Prime");
	}
}
int factor_count(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	return count;
}
