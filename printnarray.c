#include<stdio.h>
void main()
{
	int a[50],i,n;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
	
	
