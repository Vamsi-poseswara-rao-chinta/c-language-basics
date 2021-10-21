#include<stdio.h>
int main()
{
	int i,j,n,fc=0;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		fc=0;
		for(i=1;i<=j;i++)
		{
			if(j%i==0)
			{
				fc=fc+1;
			}
		}
		if(fc==2)
		{
			printf("%d\n",j);
		}
	}
}
