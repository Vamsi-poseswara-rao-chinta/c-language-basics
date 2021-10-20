#include<stdio.h>
int main()
{
	int n,s,i;
	printf("table required:");
	scanf("%d",&n);
	printf("no of steps required:");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
