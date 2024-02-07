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
		printf("%d is the maximum number",a);
	}
	else if(b<a)
	{
		printf("%d is the minimum number ",b);
	}
	else
	{
		printf("both are equal");
	}
}