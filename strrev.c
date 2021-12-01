#include<stdio.h>
#include<string.h>
void main()
{
	char v[100];
	int i;
	scanf("%[^\n]s",v);
	strrev(v);
	printf("%s\n",v);

}
