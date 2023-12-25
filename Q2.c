#include<stdio.h>

void main()
{
	int f,s;
	
	int leap[30];
	
	printf("Enter the first year:-");
	scanf("%d",&f);
	
	printf("Enter the second year:-");
	scanf("%d",&s);
	
	int i,c=0;
	
	printf("Leap year btw first and second year is =\n");
	for(i=f;i<=s;i++)
	{
		if(i%4==0 || i%100==0 || i%400==0)
		{
			c++;
			leap[c]=i;
			printf("%d  ",leap[c]);
		}
	}
}
