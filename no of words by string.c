#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int i,count=1;
	scanf("%[^*]s",&s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			count++;
		}
		
		if(s[i]=='\t')
		{
			count++;
		}
		
		if(s[i]=='\n')
		{
			count++;
		}
		i++;
	}
	printf("%d",count);
}
