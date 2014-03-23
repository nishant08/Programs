#include<stdio.h>
void reverse(char *, char *);
main()
{
	char str[40];
	int i=0;
	gets(str);
	char *word=str,*temp=str;
	while(*temp)
	{
		temp++;
		if(*temp==' ')
		{
			reverse(word,temp-1);
			word=temp+1;
		}
		else if(*temp=='\0')
		reverse(word,temp-1);
	}
	printf("%s\n", str);
	reverse(str,temp-1);
	printf("%s\n", str);
}

void reverse(char *a, char *b)
{
	char temp;
	while(a<b)
	{
		temp=*a;
		*a++=*b;
		*b--=temp;
	}
}
