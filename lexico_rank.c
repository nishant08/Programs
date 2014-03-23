#include<stdio.h>
#include<string.h>
int count(char *,int ,int );
int fact(int );
main()
{
	char str[20];
	int i,l;
	gets(str);
	//scanf("%s", str);
	l=strlen(str);
	int k,f,mul=0,b=l-1;
	for(i=0;i<l;i++)
	{
		k=count(str,i,l);
		f=fact(b-i);
		mul=mul+k*f;
	}
	printf("%d\n", mul+1);
}	
		
int count(char *str,int s,int l)
{
	int i,a=0;
	for(i=s+1;i<l;i++)
	{
		if(str[s]>str[i])
		a++;
	}
	return a;
}		
int fact(int l)
{
	if(l<=1)
	return 1;
	else 
	return (l*fact(l-1));
}
