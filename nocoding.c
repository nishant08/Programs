#include<stdio.h>
#include<string.h>
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		char str[1002];
		int j,count=0,k,z;
		
		scanf("%s", str);
		int l=strlen(str);
		count=count+l+1;
		for (j=0;j<l-1;j++)
		{
			if (str[j]<str[j+1])
			count+= str[j+1]-str[j];
			if (str[j]>str[j+1])
			count+= str[j+1]-str[j]+26;
		}
		z=l*11;
		if(count<=z)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
			
				
