#include<stdio.h>
int sub(int,int);
int main()
{
	int a,b,dif;
	scanf("%d%d",&a,&b);
	dif=sub(a,b);
	printf("%d",dif);
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}
