#include<stdio.h>
void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
		printf("a[%d]=%d\n",i,a[i]);
	}
    	printf("%d",sum);
}
