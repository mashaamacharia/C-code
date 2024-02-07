#include<stdio.h> 
int main()
{
	int a[3][3]={{40,50,60},{10,20,30},{70,80,90}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d \t",a[i][j]);
		}
		printf("\n");
	}
	
	
	
}