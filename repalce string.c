#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],ch,rpl;
	int i,len=0;
	scanf("%[^\n]s",&s);
	fflush(stdin);
	printf("Enter the character:");
	scanf("%c",&ch);
	fflush(stdin);
	printf("Enter the replacing character:");
	scanf("%c",&rpl);
	fflush(stdin);
	len=strlen(s);
		for(i=0;i<len;i++)
	{
		if(ch==s[i])
		{
			s[i]=rpl;
		}
	}
	printf("%s",s);
	
	
}
