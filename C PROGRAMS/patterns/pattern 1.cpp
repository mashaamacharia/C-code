#include<stdio.h>
#include<conio.h> 
int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		printf(" \n");
		for(j=1;j<=6;j=j+1)
		{
			if(i>j)
			{
				printf("* \t");
			}
		}
	}
	getch();
	return 0;
}