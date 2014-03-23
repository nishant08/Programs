#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 256
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		int n,j;
		char str[40001],str1[40001],s[40001],x;
		//gets(str);
		scanf("%s", str);
		int *count=(int *)calloc(sizeof(int),max);
		for(j=0;*(str+j);j++)
		count[*(str+j)]++;
		
		scanf("%s", str1);
		
		for(j=0;*(str1+j);j++)
		count[*(str1+j)]++;
		
		scanf("%d", &n);
		while(n>0)
		{
			scanf("%s", s);
			for(j=0;*(s+j);j++)
			count[*(s+j)]--;
			n--;
		}
			
			for(j=0;j<max;)
			{
				if(count[j]>=0)
				j++;
				else 
				break;
			}			
			if(j==256)
			printf("YES\n");
			else
			printf("NO\n");
	}
	return 0;
}
		
			
		
		
		
