#include<stdio.h>
int main()
{
	int l,b,h,a;
	scanf("%d%d%d%d",&l,&b,&h,&a);
	switch(a)
	{
		case 1:
			printf("%d",l*l);
			break;
		case 2:
	    	printf("%d",l*b);
			break;
		case 3:
			printf("%d",l*b/2);
			break;
		case 4:
	    	printf("%d",l*b*h/100);
			break;	
		default:printf("invalid input");
	}
}
