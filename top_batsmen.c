#include<stdio.h>
int compare(int *a,int *b)
{
	if(*a>*b)
	return 1;
	else if(*a<*b)
	return -1;
	else
	return 0;
}
int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		int a[11],k,j;
		for(j=0;j<11;j++)
		scanf("%d", &a[j]);
		scanf("%d", &k);
		qsort(a,11,sizeof(int),compare);	
		int sum=0,min=0,z,x=1;
		int count[101];
		for(j=0;j<101;j++)
		count[j]=0;
		
		for(j=0;j<11;j++)
		count[a[j]]++;
		int s=0;
		
		for(j=100;j>=0;j--)
		{
			if(s==k)
			{
				printf("1\n");
				break;
			}
			else if(s>k)
			{
				min=s-k;
				for(z=min;z>0;z--)
				{
					x=x*count[j+1];
					count[j+1]--;
				}
				//printf("%d %d\n", x,count[j+1]);
				for(z=min;z>1;z--)
				x=x/z;
				printf("%d\n", x);
				break;
			}
			else 
			s=s+count[j];
			
		}
	}
	return 0;
}
		
