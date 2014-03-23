#include<stdio.h>
//void sort(int s[],int start,int mid,int end);
//void merge(int s[],int start,int end);

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
		int k,n;
		scanf("%d %d",&n,&k);
		int w[102],j;
		for(j=0;j<n;j++)
		scanf("%d", &w[j]);
		//merge(w,0,n-1);
		qsort(w,n,sizeof(int),compare);
		int sum=0,m=0;
		if(k>n/2)
		k=n-k;
		for(j=0;j<k;j++)
		sum=sum+w[j];
		for(j=k;j<n;j++)
		m=m+w[j];
		printf("%d\n",(m-sum));
	}
	return 0;
}/*	
void merge(int s[],int start,int end)
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
void sort(int s[],int start,int mid,int end)
{
	int i=start;
	int j=mid;
	int k=start;
	unsigned long long temp[102];
	while((i<=(mid-1)) && (j<=end))
	{
		if(s[i]<=s[j])
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
}*/
