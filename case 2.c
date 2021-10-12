#include<stdio.h>
int main()
{
	char v;
	scanf("%c",&v);
	switch(v)
	{
		case'a':printf("vowels");
		       break;
		case'e':printf("vowels");
		       break;
		case'i':printf("vowels");
		       break;
		case'o':printf("vowels");
		       break;
		case'u':printf("vowels");
		       break;
		
		default:printf("consonants");
	}
}
