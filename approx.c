#include<stdio.h>
int main() 
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		long long int k,j,a=103993,b=33102;
		scanf("%lld", &k);
		
		if(k==0)
		printf("3\n");
		
		if(k>0)
		{
			printf("3.");
			for(j=0;j<k;j++)
			{
				a=(a%b)*10;	
				printf("%c", a/b +48);
				printf("%lld", a);
			}
			printf("\n");
		}
	}
	return 0;
}	
