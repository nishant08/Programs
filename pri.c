#include <stdio.h>
#include <stdlib.h>
#define limit 1000000
void sieve(unsigned long long ,unsigned long long );
void mark(int [],unsigned long long,unsigned long long );
int arr[limit];
int main()
{
	unsigned long long no1,no2;
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		unsigned long long j;
		scanf("%llu %llu", &no1,&no2);
		sieve(no1,no2);
		printf("\n");
	}
	return 0;
}		
		
		
void sieve(unsigned long long n1,unsigned long long n2)
{
	unsigned long long j;
	//if(n1>=2)
	//{
		for(j=0;j<limit;j++)
		arr[j]=0;
		
		for(j=1;j<=n2;j++)
		{
			if(j>=n1-1&&j<n2)
			{
				if(arr[j]==0)
				printf("%llu\n", j+1);
			}
			mark(arr,j+1,n2);
		}
	//}
}






void mark(int arr[],unsigned long long a,unsigned long long n)
{
	unsigned long long i=2,num;
	while((num=i*a)<=n)
	{
		arr[num-1]=1;
		i++;
	}
}
						
			
		
		
