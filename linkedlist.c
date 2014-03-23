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
void move(node *,int );
main()
{
	node *root=NULL,*ptr=NULL;
	printf("1 for insert\n2 for delete\n3 for display\n4 for search\n5 for move\n6 forexit\n");
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
				root=ptr;
				else 
				insert(root,ptr);
				break;
				
			case 2: printf("enter the data to delete-");
				scanf("%d", &n);
				delete(root,n);
				break;
				
			case 3: display(root);
			printf("NULL\n");
				break;	
				 
			case 4: printf("enter the data to search-");
				scanf("%d", &n);
				search(root,n);
				break;
			case 5: printf("enter data-");
				scanf("%d",&n);
				move(root,n);
				break;
			case 6: exit(0); 
			
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

void insert(node *root,node *ptr)
{
	if(root->next==NULL)
	root->next=ptr;
	else
	insert(root->next,ptr);
}
		
void display(node *root)
{
	if(root!=NULL)
	{
		printf("%d->",root->data);
		display(root->next);
	}
	else
	return ;
}
			
void search(node *root,int n)
{
	if(root==NULL)
	{
		printf("not found\n");
		return;
	}
	else
	{
		if(root->data==n)
		printf("FOUND\n");
		else
		search(root->next,n);
	}
}	

void delete(node *root, int n)
{
	node *temp;
	if(root==NULL)
	return;
	if(root->data==n)
	{
		temp=root;
		root=temp->next;
		free(temp);
	}
	else{
		if(root->next->data==n)
		{
			temp=root->next;
			root->next=temp->next;
			free(temp);
		}
		else
		delete(root->next,n);
		
	}
}
void move(node *root,int n)
{
	node *temp;
	node *current=root;
	while(current->next->data!=n)
		current=current->next;
	
	temp=current->next;
	current->next=temp->next;
	node *temp1;
	temp1=current->next->next;
	current->next->next=temp;
	current->next->next->next=temp1;
	//free(temp);
	
	//current=;
	//current=temp->next;
	//root=current;
	return ;
	
		
}		
		
