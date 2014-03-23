#include<stdio.h>
#include<stdlib.h>
typedef struct root1
{
	int data;
	struct root1 *next;
	struct root1 *prev;
}node;
node *getnode();
void display(node *);
void insert(node *,int);
void delete(node *,int);
void search(node *,int );
main()
{
	int p;
	node *root=NULL,*ptr=NULL;
	root=(node *)malloc(sizeof(node));
	root->next=NULL;
	root->prev=NULL;
	printf("1 for insert\n2 for delete\n3 for display\n4 for search\n5 for exit\n");
	int ch,n;
	while(1)
	{
		printf("enter your choice-");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: //ptr=getnode();
				printf("enter the data-");
				scanf("%d", &p);
				//if(root==NULL)
				//root=ptr;
				//else 
				insert(root,p);
				break;
				
			case 2: printf("enter the data to delete-");
				scanf("%d", &n);
				delete(root,n);
				break;
				
			case 3: display(root->next);
			printf("NULL\n");
				break;	
				 
			case 4: printf("enter the data to search-");
				scanf("%d", &n);
				search(root,n);
				break;
			case 5: exit(0);
		}
	}
}	
		
node *getnode()
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->next=NULL;
	return temp;
}

void insert(node *root,int p)
{
	if(root->next==NULL)
	{
		root->next=(node *)malloc(sizeof(node));
		root->next->data=p;
		root->next->next=NULL;
		root->next->prev=root;
	}
	else
	insert(root->next,p);
}
		
void display(node *root)
{
	while(root->next!=NULL)
	{
		printf("%d->",root->data);
		root=root->next;
//		display(root->next);
	}
	printf("\n");
	while(root->prev!=NULL)
	{
		printf("%d<-",root->data);
		root=root->prev;
	}
	return ;
}
			
void search(node *root,int n)
{
	while(root->next!=NULL && root->next->data!=n)
	root=root->next;
	
	if(root->next==NULL)
	{
		printf("Not found\n");
		return ;
	}
	else
	printf("found\n");
	return ;
	
}	

void delete(node *root, int n)
{
	node *temp;
	
	while(root->next!=NULL && root->next->data!=n)
	root=root->next;
	
	if(root->next==NULL)
	{
		printf("Not found\n");
		return ;
	}
	
	else
	{
		temp=root->next;
		root->next=temp->next;
		temp->next->prev=root;
		free(temp);
	}
	return ;
}
