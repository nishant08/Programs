#include<stdio.h>
#include<stdlib.h>
#define max 256
main()
{
	char str[20];
	int i;
	gets(str);
	int *count=(int *)calloc(sizeof(int),max);
	for(i=0;*(str+i);i++)
	count[*(str+i)]++;
	
	for(i=0;i<max;i++)
	{
		if(count[i]==1)
		{
			printf("%c", i);
			break;
		}
	}
	printf("\n\n");
}
		
