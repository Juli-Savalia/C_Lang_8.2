//Write a Program to find square of each element from the given array.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of an array:-");
	scanf("%d",&n);
	
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

	
//	square
	printf("Ssquare of A's array elements is:\n");
	int square;
	for(i=0;i<n;i++)
	{
		square=a[i]*a[i];
		printf("%d ",square);	
	}
}
