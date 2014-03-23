#include<stdio.h>
int main()
{
	int test,k,i,count=0;
	scanf("%d %d", &test,&k);
	for(i=0;i<test;i++)
	{
		int n;
		scanf("%d", &n);
		if(n%k==0)
		count++;
	}
	printf("%d\n", count);
	return 0;
}
