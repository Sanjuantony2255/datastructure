#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
	struct node *previous;
};
struct node *head;
void insertfirst()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->previous=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		head->previous=newnode;
		newnode->next=head;
		head=newnode;
	}
	printf("inserted element is %d",newnode->data);
}
void insertlast()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->previous=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->previous=temp;
		temp=newnode;
	}
	printf("inserted element is: %d",newnode->data);
}

void insertpos()
{
	int pos=0;
	int i=1;
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->previous=NULL;
	printf("enter the position:");
	scanf("%d",&pos);
	temp=head;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next->previous=newnode;
	temp->next=newnode;
	newnode->previous=temp;
	printf("inserted element is %d",newnode->data);
}
void deletefirst()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("no elements");
	}
	else
	{
		temp=head;
		head->next->previous=NULL;
		head=head->next;
		printf("deleted element is %d",temp->data);
		free(temp);
	}
}
void deletelast()
{
	struct node *temp,*previousnode;
	if(head==NULL)
	{
		printf("no elements");
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			previousnode=temp;
			temp=temp->next;
		}
	previousnode->next=NULL;
	printf("deleted element is %d",temp->data);
	free(temp);
	}
}
void deletepos()
{
	struct node *nextnode,*temp;
	int pos=0;
	int i=1;
	printf("enter the position:");
	scanf("%d",&pos);
	temp=head;
	if(pos==1)
	{
		deletefirst();
	}
	else
	{
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	nextnode->next->previous=temp;
	printf("deleted element is %d",nextnode->data);
	free(nextnode);
	}
	
}
void display()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("there are no elements to dislpay");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("\n the elements is %d",temp->data);
			temp=temp->next;
		}
	}
}
void search()
{
	int key=0;
	int pos=0;
	struct node *temp;
	printf("enter the value to be searched:");
	scanf("%d",&key);
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data==key)
		{
			printf("%d found at position %d",key,pos+1);
			break;
		}
	temp=temp->next;
	pos++;
	}
	if(temp->next==NULL)
	{
		if(key==temp->data)
		{
			printf("%d found at position %d",key,pos+1);
		}
		else
		{
			printf("value not found");
		}
	}
}	

void main()
{
	int choice=0;
	printf("\n doubly linked list \n");
	printf("\n1.insertfirst\n2.insertlast\n3.insertlocation\n4.deletefirst\n5.deletelast \n6.deletepos\n7.display\n8.search\n9.exit");
	do
	{
		printf("\n enter a choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertfirst();
				break;
			case 2:
				insertlast();
				break;
			case 3:
				insertpos();
				break;
	
			case 4:
				deletefirst();
				break;
			case 5:
				deletelast();
				break;
			case 6:
				deletepos();
				break;
			case 7:
				display();
				break;
			case 8:
				search();
				break;
			case 9:
				exit(0);
				printf("exiting the program");
				return;
			default:
				printf("\n invalid option");
		}
}
while(choice!=9);
}
	
	
		

	
			
		
