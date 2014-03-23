#include<stdio.h>
inline int fastinput()
{
	char c=0;int input=0;
	c=getchar_unlocked();
	while(c>='0'&&c<='9')
	{
		input=input*10+c-'0';
		c=getchar_unlocked();
	}
	return input;
}
int main()
{
	int test,i;
	test=fastinput();
	for(i=0;i<test;i++)
	{
		int n,j,a[10002];
		n=fastinput();
		for(j=0;j<n;j++)
		a[j]=fastinput();
		
		int count=1,min=a[0];
		//if(n==1)
		//printf("1\n");
		//else
		//{
			for(j=1;j<n;j++)
			{
				if(a[j]<min)
				{
					count++;
					min=a[j];
				}
			}
			printf("%d\n",count);
		//}		
	}
	return 0;
}
