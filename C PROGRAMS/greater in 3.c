#include<stdio.h> 
int main()
{
	int a,b,c;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("Enter the third number\n");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("The first number is greater");
	}
	if(b>a&&b>c)
	{
		printf("The second number is greater");
	}
	if(c>b&&c>a)
	{
		printf("The third number is grear");
}   }