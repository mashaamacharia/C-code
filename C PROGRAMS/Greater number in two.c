#include<stdio.h> 
int main()
{
	int a,b;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("First number is greater");
	}
	if (b>a)
	{
		printf("Second number is greater");
	}
	if (a==b)
	{
		printf("Both are equal");
	}
	return 0;	
}