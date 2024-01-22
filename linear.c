#include<stdio.h>
void main()
{
	int a[50],n,i,key=0;
	int flag=0;
	printf("enter the range:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value to be searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
			
		}
	}
	if(flag==1)
	{
		printf("element found at position %d",i);
	}
	else
	{
		printf("element not found");
	}
}
