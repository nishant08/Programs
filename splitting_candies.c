#include<stdio.h>
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		unsigned long long n,k;
		scanf("%llu %llu", &n,&k);
		
		if(k==0)
		printf("0 %llu\n", n);
		else
		printf("%llu %llu\n", n/k,n%k);
	}
	return 0;
}
