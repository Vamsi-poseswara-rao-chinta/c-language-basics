#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str1[100];
	scanf("%[^\n]s",str);
	printf("%s\n",str);
	strcpy(str1,str);
	printf("%s",str1);
}
