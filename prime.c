#include <stdio.h>
#define PRIMES 3400
#define SQRT_N 31623
#define MAX 100001
int main()
{
int t;
long n,m,temp;
long l,rem,i,incr,primes[PRIMES];
int num[MAX],no,index,p;
// Generate first 3402 primes which go till square root of 10^9
for(no=3;no*no<SQRT_N;no+=2)
{
if(!num[no])
{
incr=no*2;
for(i=no*no;i<SQRT_N;i+=incr)
num[i]=1;
}
}
index=0;
for(no=3;no<SQRT_N;no+=2)
if(!num[no])
primes[index++]=no;
for(i=0;i<MAX;i+=2)	
num[i]=1;
scanf("%d",&t);
while(t--)
{
scanf("%ld %ld",&m,&n);
if(m<=2)
{
if(n<=1)
{	
printf("\n");
continue;
}
m=2;
printf("%ld\n",m);
}
if(m%2==0)//if m is even then m++...
m++;
l=n-m;
index=0;
for(i=0;i<=l;i++)
num[i]=1;
for(p=primes[index];p*p<=m; p=primes[++index])
{
rem=m%p;
if(rem)
i=p-rem;
else
i=0;
if((m+i)%2==0)
i+=p;
for(;i<=l;i+=p*2)
num[i]=0;
}
for(p=primes[index];p*p<=n; p=primes[++index])
{
for(i=p*p-m;i<=l;i=i+p*2)
num[i]=0;
}
for(i=0;i<=l;i+=2)
{
if(num[i]==1)
printf("%ld\n",(m+i));
}
printf("\n");
}
return 0;
}
