#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is bigger",a);
	}
	else 
	{
		printf("%d is bigger",b);
	}
}
