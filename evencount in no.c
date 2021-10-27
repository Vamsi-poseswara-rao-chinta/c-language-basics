#include<stdio.h>
int main()
{
	int r,n,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			count=count+1;
		}
		n=n/10;
	}
	printf("%d",count);
}
