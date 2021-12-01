#include<stdio.h>
#include<string.h>
void main()
{
	char v[100],m[100];
	int i;
	scanf("%[^\n]s",&v);
	printf("%s",v);
	while(v[i]!='\0')
	{
		v[i]=m[i];
		printf("%s",m);
	}
}
