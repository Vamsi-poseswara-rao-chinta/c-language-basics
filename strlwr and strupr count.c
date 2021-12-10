#include<string.h>
#include<string.h>
void main()
{
	char s[100];
	int i,uc=0,lc=0,len=0;
	gets(s);
	len=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			uc++;
		}
		else
		{
			lc++;
		}
	}
	printf("lc=%d\n",lc);
	printf("uc=%d\n",uc);
}
