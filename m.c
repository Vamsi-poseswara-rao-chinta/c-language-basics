#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(num%5==0 && num%7==0)
	{
		printf("divisible by 7 and 5");
	}
	
	else
	{
		printf("not divisible by 5 and 7");
		
	}
}
