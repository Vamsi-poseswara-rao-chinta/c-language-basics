#include<stdio.h>
void main()
{
	int a[5],i;
	for(i=4;i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
