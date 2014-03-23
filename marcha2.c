#include<stdio.h>
int main()
{
    int i,test;
    scanf("%d", &test);
    for(i=0;i<test;i++)
    {
        int k,leaves,stem=1,j=0;
        scanf("%d", &k);
        while(k--)
        {
            scanf("%d",&leaves);
            if(leaves>stem)
            {
                j=1;
                break;
            }
            stem=(stem-leaves)*2;
         }
         if(j||stem)
         printf("No\n")   ;
         else
            printf("Yes\n");
    }
    return 0;
}

