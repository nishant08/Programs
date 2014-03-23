#include<cstdio>
#include<cmath>
#define LEFT(i) (i<<1)
#define RIGHT(i) ((i<<1)+1)
#define PARENT(i) (i>>2)
int heapSize=0;
void swap(int &a,int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}
void maxHepify(int *input,int i)
{
	int l = LEFT(i);
	int r = RIGHT(i);
	int largest=0;
	if(l<= heapSize && input[l] > input[i])
		largest = l;
	else
		largest = i;
	if(r <= heapSize && input[r] > input[largest])
		largest = r;
	if(largest != i)
	{
		swap(input[i] , input[largest]);
		maxHepify(input,largest);
	}
	return;
}
void buildMaxHeap(int *input)
{
	for(int i=heapSize/2;i>=1;i--)
		maxHepify(input,i);
}
void heapSort(int *input)
{
	buildMaxHeap(input);
	for(int i=heapSize;i>=2;i--)
	{
		swap(input[i],input[1]);
		heapSize--;
		maxHepify(input,1);
	}
	return;
}

int main()
{
	int input[10];
	heapSize = 9;
	for(int i =1;i<10;i++)
		scanf("%d",&input[i]);
	heapSort(input);
	for(int i=1;i<10;i++)
		printf("%d ",input[i]);
	printf("\n");
}
