#include<stdio.h>
int main()
{
    int test,i;
    scanf("%d", &test);
    for(i=0;i<test;i++)
    {
        int n,a,b,j;
        scanf("%d",&n);
        scanf("%d %d", &a,&b);
        //for(j=0;j<n;j++)
        int counta=0,countb=0;
        while(a)
        {
            if(a&1)
            {
                //printf("1");
                counta++;
                a=a>>1;
            }
        }
        while(b)
        {
            if(b&1)
            {
                //printf("1");
                countb++;
                b=b>>1;
            }
        }
        int c;
        if(counta>countb)
            c=counta-countb;
        else
            c=countb-counta;

    }
}
