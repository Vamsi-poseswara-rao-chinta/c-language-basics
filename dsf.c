#include<stdio.h>
int main()
{
	int Tel,Eng,Mat,Hin,sci,P;
	float per;
	scanf("%d%d%d%d%d",&Tel,&Eng,&Mat,&Hin,&sci);
	P=Tel+Eng+Mat+Hin+sci;
	per=P*100/500;
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
