#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*struct Stack
{
	int top=-1;
	int *arr;
};*/

int operand(char ch)
{
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	return 1;
	else 
	return 0;
}

int prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}


void infixtopostfix(char exp[])
{
	int i,k;
	
	int l=strlen(exp);
	int arr[l];
	/*struct Stack *stack=malloc(sizeof(struct stack)*l);
	if(stack==NULL)
	return ;
	*/
	for(i=0;i<l;i++)
	arr[i]=0;
	int top=-1;
	char temp;
	for(i=0,k=-1;*(exp+i);i++)
	{
		//printf("%c\n",exp[i]);
		if(operand(exp[i]))
		exp[++k]=exp[i];
		
		else if(exp[i]=='(')
		{
			top++;
			arr[top]=exp[i];
		}
		else if(exp[i]==')')
		{
			while(top!=-1 && arr[top]!='(')
			{
				exp[++k]=arr[top];
				top--;
			}
			if(top!=-1 && arr[top]!='(')
			return ;
			else 
			{
				temp=arr[top];
				top--;
			}
			//if(arr[top]=='(')
			//temp=arr[top--];
		}
		
		else 
		{
			while(top!=-1 && prec(exp[i])<=prec(arr[top]))
			{
				exp[++k]=arr[top--];
			}
			top++;
			arr[top]=exp[i];
		}
	}
	while(top!=-1)
	{
		exp[++k]=arr[top--];
	}
	exp[++k]='\0';
	printf("%s\n",exp);
	return ;
}
 


int main()
{
	int test,i;
	scanf("%d", &test);
	for(i=0;i<test;i++)
	{
		char exp[402];
		scanf("%s", exp);
		infixtopostfix(exp);
	}
	return 0;
}		
