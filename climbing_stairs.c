#include<stdio.h>
main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		long int n,m;
		int g,j,k;
		scanf("%ld %d",&n,&g);
		if(n>1)
		m=n*(n-1)/2;
		else 
		m=1;
		char str[65];
		long int count=0;
		for(j=63;j>=0;j--)
		{
			k=m>>j;
			if(k&1)
			{
				count++;
				str[j]='1';
			}	
			else
			{
				str[j]='0';
				continue;
			}
		}
		if(count==g)
		printf("CORRECT\n");
		else
		printf("INCORRECT\n");
	}
	return 0;
}

			
