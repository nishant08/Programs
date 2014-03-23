#include<stdio.h>
#include<string.h>
void swap(char *,char *);
void permute(char *,int,int );
main()
{
	char str[20];
	int i,l;
	gets(str);
	l=strlen(str);
	permute(str,0,l-1);
}

void permute(char *str,int i,int n)
{	
	int j;
	if(i==n)
	printf("%s\n", str);
	else
	{
		for(j=i;j<=n;j++)
		{
			swap((str+i),(str+j));
			permute(str,i+1,n);
			swap((str+i),(str+j));
		}
	}
}
void swap(char *a,char *b)
{
	char temp;
	temp = *a;
	*a=*b;
	*b=temp;
}
			
