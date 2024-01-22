#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
void enqueue();
void dequeue();
void display();
int queue[SIZE],rear=-1,front=-1,item;
void main()
{
	int choice;
	printf("circular queue operations.....");
	printf("\n 1.insertion(enqueue)\n 2.deletion(dequeue)\n 3.display\n 4.exit");
	do
	{
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default:printf("\n enter valid choice:");
				break;
		}
	}
	while(choice!=4);
}
void enqueue()
{
	if(front==(rear+1)%SIZE)
	{
		printf("\noverflow");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear=(rear+1)%SIZE;
		printf("\nenter element");
		scanf("%d",&item);
		queue[rear]=item;
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("\n underflow");
	}
	else
	{
		printf("\ndeleted element is %d",queue[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=(front+1)%SIZE;
		}
	}
}
void display()
{
	int i=0;
	if(front==rear==-1)
	{
		printf("\n underflow");
	}
	else
	{
		printf("\n the queue is:\n");
		for(i=front;i!=rear;i=(i+1)%SIZE)
		{
			printf("\n %d\t",queue[i]);
		}
		printf("%d",queue[i]);
	}
}
		

