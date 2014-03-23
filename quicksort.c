#include<stdio.h>
#include<stdlib.h>
void quicksort( int [],int ,int);
int partition( int a[] ,int,int );
void swap( int *,int *);
main()
{
	int a[10],i,n;
	printf("enter the no. of elements u want to enter- ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("enter elements- ");
		scanf("%d", &a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ", a[i]);
}

void quicksort(int a[],int s,int e)
{
	int p;
	if(s<e)
	{
		p=partition(a,s,e);
		quicksort(a,s,p-1);
		quicksort(a,p+1,e);
	}
}

int partition(int a[], int s,int e)
{
	int x=a[e];
	int j=s-1;
	int i;
	for(i=s;i<=e-1;i++)
	{
		if(a[i]<=x)
		{
			j++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[j+1],&a[e]);
	return j+1;
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
