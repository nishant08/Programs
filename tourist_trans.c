#include<stdio.h>
#include<ctype.h>
int main()
{
	int test,i;
	char str[27];
	scanf("%d %s", &test,str);
	for(i=0;i<test;i++)
	{
		char str1[102],z;
		int j,k,l,m,y;
		scanf("%s", str1);
		for(j=0;*(str1+j);j++)
		{
			k=str1[j];
			if(k>=97 && k<=122)
			{
				l=k-97;
				str1[j]=str[l];
			}
			else if(k>=65 && k<=90)
			{
				l=k-65;
				str1[j]=toupper(str[l]);
			}
			else if(str1[j]=='_')
			str1[j]=' ';
			else 
			continue;
		}
		printf("%s\n", str1);
	}
	return 0;
}
