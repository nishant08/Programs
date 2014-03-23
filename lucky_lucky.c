#include<stdio.h>
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		unsigned long long n,j,l=0;
		scanf("%llu", &n);
		//if(n==1 || n==2 || n==3 || n==5 || n==6)
		//printf("%d\n", -1);
		if(n==4)
		 {
			printf("0\n");
			l=1;
		}		
		else if(n%7==0)
		{
			printf("%llu\n", n);
			l=1;
		}
		else
		{	
			for(j=1;j<=n;j++)
			{
				if((n-j)%7==0 && (j%4)==0)
				{
					l=1;
					printf("%llu\n",n-j);
					break;
				}
			}
			
		}
		if(l==0)
		printf("%d\n",-1);
	}
	return 0;
}






