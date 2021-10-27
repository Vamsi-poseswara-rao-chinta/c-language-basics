#include<stdio.h>
int main()
{
	int r,n,ecount=0,ocount=0,dc=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			ecount=ecount+1;
		}
		else
		{
			ocount=ocount+1;
		}
		dc=dc+1;
		n=n/10;
	}
	printf("%d\n",ecount);
	printf("%d\n",ocount);
	printf("%d\n",dc);
	if(dc==ecount)
	{
		printf("Strong even");
	}
	else if(dc==ocount)
	{
		printf("Strong odd");
	}
	else
	{
		printf("Mixed number");
	}
}
