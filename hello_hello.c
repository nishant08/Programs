#include<stdio.h>
typedef struct 
{
	int m;
	float r;
	int c;
}plan;
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		float d;
		int u,n,j;
		scanf("%f %d %d", &d,&u,&n);
		plan a[n];
		for(j=0;j<n;j++)
		scanf("%d %f %d",&a[j].m, &a[j].r,&a[j].c);
		
		float sum,sum1;
		int min=0;
		sum=d*u;
		
		for(j=0;j<n;j++)
		{
			sum1=((a[j].r*u*a[j].m)+a[j].c)/a[j].m;
			if(sum>sum1)
			{
				min=j+1;
				sum=sum1;
			}
		}
		printf("%d\n", min);
	}
	return 0;
}
