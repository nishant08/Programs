#include<stdio.h>
int main()
{
	int test,z;
	scanf("%d", &test);
	for(z=0;z<test;z++)
	{
		int g,j;
		scanf("%d",&g);
		for(j=0;j<g;j++)
		{
			unsigned long long n;
			int i,q;
			scanf("%d %llu %d", &i,&n,&q);
			/*unsigned long long a[n],count=0,k,m;
			for(k=0;k<n;k++)
			a[k]=i;
				
			for(k=0;k<n;k++)
			{
				if(k==n)
				break;
				for(m=0;m<=k;m++)
				{
					if(a[m]==1)
					a[m]=2;
					else
					a[m]=1;
				}
			}
			for(k=0;k<n;k++)
			{
				if(a[k]==q)
				count++;
			}
			printf("%llu\n",count);*/
			if(n%2==0)
			printf("%llu",n/2);
			else
			{
				if(q==i)
				printf("%llu\n",n/2);
				else
				printf("%llu\n",(n/2+1));
			}
		}
	}
	return 0;
}
