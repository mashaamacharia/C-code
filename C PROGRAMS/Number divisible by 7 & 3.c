#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number\n");
	scanf("%d",&a);
	if(a%7==0 && a%3==0)
	{
		printf("Number is divisible by 7 and 3");		
	}
	else
	{
		printf("Number is not divisible by 7 or 3");
	}
	return 0;
	
}