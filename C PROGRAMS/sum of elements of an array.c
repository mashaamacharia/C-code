#include<stdio.h> 
int main()
{
	int i,j,sum=0;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("Enter %d the elements of the array \n",i+1);
        scanf("%d",&a[i]);
		}
	}  
	for(j=0;j<5;j++)
	{
		printf("The elements of a at [%d]=%d \n",j,a[j]);
		sum=sum+a[j];
	}
	printf("The sum of all the elements is %d \n",sum);
	
}