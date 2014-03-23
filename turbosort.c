#include<stdio.h>
void qsort(int [],int,int);
int part(int [],int,int);
void exchange(int *,int *);

int main()
{
	int n,i;
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	
	qsort(arr,0,n-1);
	
	for(i=0;i<n;i++)
	printf("%d\n", arr[i]);
	
	return 0;
}

void qsort(int arr[], int start, int n)
{
	if(start<n)
	{
	int p;
	p=part(arr,0,n);
	qsort(arr,0,p-1);
	qsort(arr,p+1,n);
	}
}

int part(int arr[], int start, int end)
{
	int x=arr[end];
	int i=start-1;
	int j;
	
	for(j=start;j<end;j++)
	{
		if(arr[j]<=x)
		{
			i++;
			exchange(&arr[i],&arr[j]);
		}
	}
	exchange(&arr[i+1],&arr[end]);
	return i+1;
}

void exchange(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
