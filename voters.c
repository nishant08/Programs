#include<stdio.h>
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
	int a1,b1,c1;
	scanf("%d %d %d", &a1,&b1,&c1);
	
	int a[a1],b[b1],c[c1],i;
	
	for(i=0;i<a1;i++)
	scanf("%d", &a[i]);
	
	for(i=0;i<b1;i++)
	scanf("%d", &b[i]);
	
	for(i=0;i<c1;i++)
	scanf("%d", &c[i]);
	
	int sum;
	sum=a1+b1+c1+1;
	
	int out[sum],l=0,m=0,n=0;
	for(i=0;l<a1 && m<b1;i++)
	{
		if(a[l]>b[m])
		m++;
		
		else if(a[l]<b[m])
		l++;
		
		else
		{
			out[n]=a[l];
			a[l]=-1;
			b[m]=-1;
			n++;
			l++;
			m++;;
		}
	}
	l=0;
	m=0;
	for(i=0;l<a1 && m<c1;i++)
	{
		if(a[l]>c[m])
		m++;
		
		else if(a[l]<c[m])
		l++;
		
		else
		{
			out[n]=a[l];
			a[l]=-2;
			c[m]=-2;
			n++;
			l++;
			m++;
		}
	}			
	l=0;
	m=0;
	for(i=0;l<b1 && m<c1;i++)
	{
		if(b[l]>c[m])
		m++;
		
		else if(b[l]<c[m])
		l++;
		
		else
		{
			out[n]=b[l];
			b[l]=-3;
			c[m]=-3;
			n++;
			l++;
			m++;
		}
	}
	qsort(out,n,sizeof(int),compare);	
	printf("%d\n", n);		
	for(i=0;i<n;i++)
	printf("%d\n",out[i]);
	return 0;
}
