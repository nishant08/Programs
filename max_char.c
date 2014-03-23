#include<stdio.h>
#include<stdlib.h>
#define max 256
main()
{
	char str[20];
	int i;
	scanf("%s", str);
	int *count=(int *)calloc(sizeof(int),max);
	for(i=0;*(str+i);i++)
	count[*(str+i)]++;
	int m=0;
	for(i=1;i<max;i++)
	{
		if(count[i]>count[m])
		m=i;
	}
	printf("%c\n", m);
}
