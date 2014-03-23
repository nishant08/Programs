#include<stdio.h>
#include<stdlib.h>
typedef struct root1
{
	int data;
	struct root1 *next;
}node;
node *getnode();
void display(node *);
void insert(node *,node *);
void delete(node *,int);
void search(node *,int );
main()
{
	node *root=NULL,*ptr=NULL,*ptr1=NULL;
//	root=(node*)malloc(sizeof(node));
//	ptr1=root;
//	ptr1->next=root;	
	printf("1 for insert\n2 for delete\n3 for display\n4 for search\n5 for exit\n");
	int ch,n;
	while(1)
	{
		printf("enter your choice-");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: ptr=getnode();
				printf("enter the data-");
				scanf("%d", &ptr->data);
				if(root==NULL)
				{
					root=ptr;
					root->next=root;
				}
				else 
				insert(root,ptr);
				break;
				
			case 2: printf("enter the data to delete-");
				scanf("%d", &n);
				delete(root,n);
				break;
				
			case 3: display(root);
				//printf("NULL\n");
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
//	temp->next=NULL;
	return temp;
}

void insert(node *root,node *ptr)
{
	node *pointer=root;
	while(pointer->next!=root)
	pointer=pointer->next;
	
	pointer->next=ptr;
	pointer->next->next=root;
	
}
		
void display(node *root)
{
	node *pointer=root;
	while(pointer->next!=root)
	{
		printf("%d->",pointer->data);
		pointer=pointer->next;
	}
	printf("%d\n",pointer->data);
	return ;
}
			
void search(node *root,int n)
{
	node *ptr=root;
	while(ptr->data!=n)
	{
		if(ptr->next==root)
		{
			printf("not found\n");
			return;
		}
		ptr=ptr->next;
	}
	if(ptr->data==n)
	printf("FOUND\n");
	return;
}	

void delete(node *root, int n)
{
	node *temp=root,*ptr;
	while(temp->data!=n)
	{	
		if(temp->next==root)
		{
			printf("not found\n");
			return ;
		}
		temp=temp->next;
	}
	ptr=temp->next;
	temp->next=ptr->next;
	free(ptr);
	return ;
}
