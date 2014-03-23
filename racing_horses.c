#include<stdio.h>
inline int get_int()
{
	int n=0,c;
	c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		n=n*10+c-'0';
		c=getchar_unlocked();
	}
	return n;
}
int compare(int *a,int *b)
{
	if(*a>*b)
	return 1;
	else if(*a<*b)
	return -1;
	else
	return 0;
}

//void merge(int [],int ,int);
//void sort(int [],int ,int ,int );
int main()
{
	int test,i;
	//scanf("%d", &test);
	test=get_int();
	for(i=0;i<test;i++)
	{
		int n,j,min=1000000009,s[5003];
		//scanf("%d", &n);
		n=get_int();
	
		//unsigned long long s[5003];
		for(j=0;j<n;j++)
		s[j]=get_int();
		
		qsort(s,n,sizeof(int),compare);
		//scanf("%llu", &s[j]);
		//merge(s,0,n-1);
		//unsigned long long min=1000000009;
		for(j=1;j<n;j++)
		{
			if((s[j]-s[j-1])<min)
			min=(s[j]-s[j-1]);
		}
		printf("%d\n",min);
	}
	return 0;
}
/*
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
	int temp[5003];
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
