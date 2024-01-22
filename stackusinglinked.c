#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void main()
{
	int choice;
	printf("stack operations using linked list......................");
	printf("\n1.push\n2.pop\n3.display\n4.exit");
	do
	{
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("enter valid choice:");
				 break;
		}
	}
		while(choice!=4);

}
void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
	printf("inserted element is %d",newnode->data);
}
void pop()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("no elements");
	}
	else
	{
		temp=head;
		head=head->next;
		printf("deleted element is %d",temp->data);
		free(temp);
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
		
			
