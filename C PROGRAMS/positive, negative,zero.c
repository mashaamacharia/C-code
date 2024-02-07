#include<stdio.h> 
int main()
{
	int no;
	printf("Enter any number\n");
	scanf("%d",&no);
	if(no>0)
	{
		printf("The no is positive");
	}
	if(no<0)
	{
		printf("The no is negative");
	}
	if(no==0)
	{
		printf("The no is zero");
	}
	return 0;
}