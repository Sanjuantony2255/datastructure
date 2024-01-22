#include<stdio.h>
void main()
{
	int a1[50],a2[50],a3[100],i,j,k=0,m,n;
	printf("enter the range for 1st array:");
	scanf("%d",&m);
	printf("enter the elements of first sorted array:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter the range for 2nd array:");
	scanf("%d",&n);
	printf("enter the elements of second sorted array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
	}
	i=0;
	j=0;
	while(i<m && j<n)
	{
		if(a1[i]<a2[j])
		{
			a3[k]=a1[i];
			i++;
		}
		else
		{
			a3[k]=a2[j];
			j++;
		}
		k++;
	}
	if(i>=m)
	{
		while(j<n)
		{
			a3[k]=a2[j];
			j++;
			k++;
		}
	}
	if(j>=n)
	{
		while(i<m)
		{
			a3[k]=a1[i];
			i++;
			k++;
		}
	}
printf("the array is:");
for(i=0;i<m+n;i++)
{
	printf("%d",a3[i]);
}
}

