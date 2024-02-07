#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number of copies sold\n");
	scanf("%d",&a);
	printf("Enter the cost of one copy of the newspaper\n");
	scanf("%d",&b);
	printf("Enter the cost spent by the agency on one copy of the newspaper\n");
	scanf("%d",&c);
	d=(a*b)-(a*c)-100;
	printf("The profit obtained is Rs.%d",d);
	return 0;
}