#include<stdio.h>
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		int n,a,b,j,k,counta=0,countb=0;
		scanf("%d %d %d",&n,&a,&b);
		
		for(j=31;j>=0;j--)
		{
			k=a>>j;
			if(k&1)
			counta++;
		}
		k=0;
		for(j=31;j>=0;j--)
		{
			k=b>>j;
			if(k&1)
			countb++;
		}
		char str1[31],str2[31];
		if(counta>countb)
		{
			k=counta-countb;
			for(j=0;j<counta-k;j++)
			str1[j]='1';
			
			
