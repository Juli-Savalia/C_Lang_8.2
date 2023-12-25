//Write a Program to find square of each element from the given array.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of A array:-");
	scanf("%d",&n);
	
	// 1st array
	printf("Enter array A's elements:\n");
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)//printing a matrix
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\n");
	int m,b[m];
	printf("Enter the size of B array:-");
	scanf("%d",&m);
	// 2nd array
	printf("Enter array B's elements:\n");

	for(i=0;i<m;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++)//printing a matrix
	{
		printf("%d ",b[i]);
	}
	
	printf("\n\n");

	int l;
	l=n+m;
	int c[l];
	
//	merge
	printf("Merge of A and B array elements are :- \n");
	int j;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
//		printf("%d ",merge);	
	}
	for(i=0,j=n;i<m && i<l;i++,j++)
	{
		c[i]=b[i];
//		printf("%d ",merge);	
	}
	for(i=0;i<l;i++)
	{
		printf("%d ",c[i]);	
	}
}
