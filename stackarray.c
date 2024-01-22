#include<stdio.h>
int stack[50],top,x,i,n,choice;
void push(void);
void pop(void);
void display(void);
void main()
{	
	top=-1;
	printf("enter the size of the stack:");
	scanf("%d",&n);
	printf("stack operations are.........");
	printf("...............................");
	printf("\n1.push\n2.pop\n3.display\n4.exit");
	
	do
	{
		printf("\n enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("exiting.....");
				break;
			default :
				printf("enter valid choice between 1 and 4:");		
		}
	}
	while(choice!=4);
	}
	void push()
	{
		if(top>=n-1)
		{
			printf("\n stack overflow");
		}
		else
		{
			printf("enter the elements to be inserted:");
			scanf("%d",&x);
			top=top+1;
			stack[top]=x;
		}
	}
	void pop()
	{
		if(top<=-1)
		{
			printf("\n stack underflow");
		}
		else
		{
			printf("the element to be popped is %d",stack[top]);
			top=top-1;
		}
	}
	void display()
	{
		if(top>=0)
		{
			for(i=top;i>=0;i--)
			{
				printf("%d",stack[i]);
			}
		}
		else
		{
			printf("stack is empty");
			printf("enter the choice:");
		}
	}



