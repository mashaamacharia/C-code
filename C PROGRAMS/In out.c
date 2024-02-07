#include<stdio.h> 
int main()
{
	int a,b;
	printf("Enter the number of problems\n");
	scanf("%d",&a);
	printf("Enter the number of problems solved\n");
	scanf("%d",&b);
	if(b>a/2)
	{
		printf("IN");
	}
	else
	{
		printf("OUT");
	}
	return 0;
	
}