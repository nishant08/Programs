#include<stdio.h>
#include<string.h>
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		char s1[25005],s2[25005];
		scanf("%s", s1);
		scanf("%s", s2);
		int l1=strlen(s1);
		int l2=strlen(s2);
		int j,count=0,k=0,m=0,v=0;
			
		for(j=0;*(s2+j)&&*(s1+m);j++)
		{
			if(*(s2+j)==*(s1+m))
			m++;
		}
		if(m==l1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
				
