#include<stdio.h>
#include<stdlib.h>
#define max 256
main()
{
	char str1[20],str2[20];
	int i,*count;
	gets(str1);
	gets(str2);
	
	count=(int *)calloc(sizeof(int),max);
	for(i=0;*(str2+i);i++)
	count[*(str2+i)]++;
	i=0;
	char temp[20];
	int a,j=0;
	while(*(str1+i))
	{
		a=*(str1+i);
		if(count[a]==0)
		{
			temp[j]=*(str1+i);
			j++;
		}
		i++;
	}
	temp[j]='\0';
	printf("%s\n", temp);
}
