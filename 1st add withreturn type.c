#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	printf("%d",sum);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
