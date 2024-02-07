#include<stdio.h> 
int main()
{
	int dividend,divisor;
	printf("Enter the number of students in the class\n");
	scanf("%d",&dividend);
	printf("Enter the number of teams\n");
	scanf("%d",&divisor);
	printf("The number of students in each team is %d\n and the number of students left out is %d",dividend/divisor,dividend%divisor);
	return 0;	
}