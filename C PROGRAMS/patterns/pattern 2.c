#include<stdio.h>
#include<conio.h> 
int main()
{
	int i,j;
	for(j=1;j<=6;j++)
	{
		for(i=1;i<=6;i++)
		{
			if(j<=i)
			{
			printf("* \t");
			}
		//	printf("\n");
		}
			printf("\n");
	}
	getch();
	return 0;
}