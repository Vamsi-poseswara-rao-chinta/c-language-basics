#include<stdio.h>
int big(int,int,int);
int main()
{
	int a,b,c,d;
	printf("enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	d=big(a,b,c);
	printf("biggest:%d",d);
}
int big(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
		
	}
	else if (b>a && b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
