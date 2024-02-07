#include<stdio.h> 
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a!=0&&a%2==0&&a<101)
	{
		printf("Doll swings");
	}	
	else
	{
		printf("INVALID KEY");
	}
	return 0;
}