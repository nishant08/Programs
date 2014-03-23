#include<stdio.h>
#include<string.h>
int main()
{
    int i,test;
    scanf("%d", &test);
    for(i=0;i<test;i++)
    {
        char str1[25002],str2[25002];
        int j;
      //  fgets(str1,25002,stdin);
        //fgets(str2,25002,stdin);
        scanf("%s", str1);
        scanf("%s", str2);
        int l1=strlen(str1);
        int l2=strlen(str2),m=0;
       // printf("%d %d\n",l1,l2);
        for(j=0;*(str2+j)&&*(str1+m);j++)
		{
			if(*(str2+j)==*(str1+m))
            {
                m++;
              //  printf("dsfdf ");
            }
		}
	//	printf("%d\n",m);
		if(m==l1)
		printf("YES\n");
		else
        {
            m=0;
            for(j=0;*(str2+m)&&*(str1+j);j++)
            {
                if(*(str2+m)==*(str1+j))
                m++;
            }
            if(m==l2)
            printf("YES\n");
            else
            printf("NO\n");
        }
	}
	return 0;
}

