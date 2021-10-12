#include<stdio.h>
int main()
{
	char v;
	scanf("%c",&v);
	int a,b,c;
	scanf("%d%d",&a,&b);
	switch(v)
	{
		case'+':
		c=a+b;
		printf("%d",c);
		break;
		case'-':
		c=a-b;	
		printf("%d",c);
		break;
		case'*':
		c=a*b;	
		printf("%d",c);
		break;
		case'/':
		c=a/b;	
		printf("%d",c);
		break;
		case'%':
		c=a%b;	
		printf("%d",c);
		break;
		default:printf("ivalid arithmetic operator");
	}
}
