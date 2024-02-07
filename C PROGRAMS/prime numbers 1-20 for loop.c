#include<stdio.h> 
int main()
{
	int a=2;
	for(a=2;a<21;a++)
	{
		if(a%2==0&&a%a==0)
			printf("%d \t",a);
		
	}
}