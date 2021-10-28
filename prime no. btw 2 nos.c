#include<stdio.h>
int main()
{
	int n1,n2,i,j,t=0;
	printf("enter the range:");
	scanf("%d%d",&n1,&n2);
	printf("prime numbers btw %d and %d are:\n",n1,n2);
	for(i=n1;i<n2;i++)
	{
		t=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				t=1;
				break;
			}
		}
		if(t==0)
		{
			printf("%d\n",i);
		}
	
	}
}
