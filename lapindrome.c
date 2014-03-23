#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 256
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		char str[1005];
		scanf("%s", str);
		int l=strlen(str);
	
		int j;
		int *count1=(int *)calloc(sizeof(int),max);
		int *count2=(int *)calloc(sizeof(int),max);
		if(l%2==0)
		{
			for(j=0;j<(l/2);j++)
			count1[*(str+j)]++;
			
			for(j=l/2;j<l;j++)
			count2[*(str+j)]++;
			
			for(j=0;j<256;j++)
			{
				if(count1[j]==count2[j])
				continue;
				else
				break;
			}
			if(j==256)
			printf("YES\n");
			else
			printf("NO\n");
		}
		else
		{
			for(j=0;j<(l/2);j++)
			count1[*(str+j)]++;
			
			for(j=l/2+1;j<l;j++)
			count2[*(str+j)]++;
			
			for(j=0;j<256;j++)
			{
				if(count1[j]==count2[j])
				continue;
				else
				break;
			}
			if(j==256)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}
				
			
			
