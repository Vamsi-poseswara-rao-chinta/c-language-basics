#include<stdio.h>
int main()
{
	int t,h,e,p;
	float per;
	scanf("%d%d%d",&t,&h,&e);
	p=t+h+e;
	per=p*100/300;
	printf("%.2f",per);
	if(per>90)
	{
		printf("GRADE A");
	}
	else if(per>=80 && per<=90)
	{
		printf("GRADE B");
	}
	else if(per>=70 && per<=80)
	{
		printf("GRADE C");
	}
	else if(per>=60 && per<=70)
	{
		printf("GRADE D");
	}
	else if(per>=50 && per<=60)
	{
		printf("GRADE E");
		
	}
	else 
	{
		printf("fail");
	}
}

