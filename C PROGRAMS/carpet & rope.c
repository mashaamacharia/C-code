#include<stdio.h> 
int main()
{
	int a,b;
	printf("Enter the length of the ground\n");
	scanf("%d",&a);
	printf("Enter the width of the ground\n");
	scanf("%d",&b);
	printf("Total carpet to be bought is %dm\n",a*b);
	printf("Length of the rope to be bought is %dsqm\n",2*(a)+2*(b));
	return 0;
}