#include<stdio.h>
typedef struct
{
	int start;
	int fin;
}a;

void merge(a [],int ,int);
void sort(a [],int ,int ,int );
int main()
{	
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		int n,j;
		scanf("%d", &n);
		
		a arr[n];
		for(j=0;j<n;j++)
		scanf("%d",&arr[j].start);
		
		for(j=0;j<n;j++)
		scanf("%d",&arr[j].fin);
		
		merge(arr,0,n-1);
		
		int count=0,k,max=0,m=0;
		for(j=0;j<n;j++)
		{
			count=0;
			m=j;
			m++;
			for(k=m;k<n;k++)
			{
				if(arr[j].fin>arr[k].start)
				count++;
			}
			if(count>max)
			max=count;
		}
		printf("%d\n",max);
	}
	return 0;
}	/*for(j=0;j<n;j++)
		{
			printf("%d",arr[j].start);
			printf("%d",arr[j].fin);
			printf("\n");
		}*/

void merge(a s[],int start,int end)
{
	int mid;
	if(start<end)
	{
		mid=(start+end)/2;
		merge(s,start,mid);
		merge(s,mid+1,end);
		sort(s,start,mid+1,end);
	}
}
void sort(a s[],int start,int mid,int end)
{
	int i=start;
	int j=mid;
	int k=start;
	a temp[end+1];
	while((i<=(mid-1)) && (j<=end))
	{
		if(s[i].start<=s[j].start)
		temp[k++]=s[i++];
		else
		temp[k++]=s[j++];
	}
	while(i<=mid-1)
	temp[k++]=s[i++];
	while(j<=end)
	temp[k++]=s[j++];
	for(i=0;i<=end;i++)
	s[i]=temp[i];
}
		
		
		
		
