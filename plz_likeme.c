#include<stdlib.h>
#include<stdio.h>
int main()
{
	unsigned long long like,day,start,constant,out=1;
	int test;
	scanf("%d", &test);
	int i;
	for(i=0;i<test;i++)
	{	
		int j,k=0;
		scanf("%llu %llu %llu %llu", &like,&day,&start,&constant);
		out=start;
		day--;
		constant++;
		for(j=0;j<day;j++)
		{
			out=out*constant;
			if(out>=like)
			{
				printf("ALIVE AND KICKING\n");
				k=1;
				break;
			}
		}
		if(out<like)
		{
			printf("DEAD AND ROTTING\n");
		}
		if(k==0)
		{
			if(out>=like)
			printf("ALIVE AND KICKING\n");
		}
	}
	return 0;
}

