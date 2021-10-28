#include<stdio.h>
int main()
{
	int a,b,t=2,r;
	scanf("%d%d",&a,&b);
	while(a!=1)
	{
		if(a%t==0 && b%t==0)
		{
			a=a/t;
			b=b/t;
			r=r*t;
		}
		else
		{
			t++;
		}
		if(t>a || t>b)
		{
			r=r*a*b;
			break;
		}
	
	}
		printf("%d\n",r);
}
