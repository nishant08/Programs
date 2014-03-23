#include<stdio.h>
main()
{
	int n;
	scanf("%d", &n);
	int i,odd=0,arr[32];
	for(i=0;i<32;i++)
	arr[i]=0;
	i=31;
	while(n)
	{
		if(n&1)
		arr[i]=1;
		else
		arr[i]=0;
		n=n>>1;
		i--;
	}
	for(i=0;i<32;i++)
	printf("%d",arr[i]);
	printf("\n");
}
