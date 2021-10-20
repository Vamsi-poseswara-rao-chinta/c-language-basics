#include<stdio.h>
int main()
{
	int n,s,i=1;
	printf("table required:");
	scanf("%d",&n);
	printf("no of steps required:");
	scanf("%d",&s);
	while(i<=s)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
}
