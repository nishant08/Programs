#include<stdio.h>
#include<string.h>
typedef struct
{
	char user[21];
	char c;
}chef;
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		int n,j;
		scanf("%d",&n);
		
		chef arr[n];
		
		for(j=0;j<n;j++)
		scanf("%s %c",arr[j].user,&arr[j].c);
		int k,m=0,count=0,l=0;
		for(j=0;j<n;j++)
		{
			if(arr[j].user[0]=='0')
			continue;
			m=j;
			l=j;
			m++;
			for(k=m;k<n;k++)
			{
				if(strcmp(arr[j].user,arr[k].user)==0)
				{
					arr[k].user[0]='0';
					l=k;
				}
			}
			if(arr[l].c=='+')
			count=count+1;
			else
			count=count-1;
		}
		printf("%d\n",count);
	}
	return 0;
}	
