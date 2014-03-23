#include<stdio.h>
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		int n,x,j;
		scanf("%d %d", &n,&x);
		
		int arr[100],sum=0,k=0;
		for(j=0;j<n;j++)
		{
			scanf("%d", &arr[j]);
			sum=sum+arr[j];
		}
		
		if((sum%x)==0)
		printf("%d\n",sum/x);
		
		else if((sum%x)>0)
		{
			for(j=0;j<n;j++)
			{
				if((sum%x)>=arr[j])
				{
					printf("%d\n", -1);
					k=1;
					break;
				}
			}
			if(k==0)
			printf("%d\n", sum/x);
		}
	}
	return 0;
}
				
