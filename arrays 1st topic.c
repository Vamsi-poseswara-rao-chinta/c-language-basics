#include<stdio.h>
void main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
