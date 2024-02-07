#include<stdio.h> 
int main()
{
	int i,j;
	int books[3][3];
	for(i=0;i<3;i++)
	{
         for(j=0;j<3;j++)
		 {
		 	printf("Enter %d %d books \n",i+1,j+1 );
		 	scanf("%d",&books[i][j]);
		 }
	}
	int sum=0;
	i=0;
	j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",books[i][j]);
			sum=sum+books[i][j];
		}
	 //	printf("\n");
	}
	printf("The sum of all the elements entered is %d\n",sum);
	return 0;
}