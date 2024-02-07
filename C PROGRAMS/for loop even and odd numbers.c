#include<stdio.h>
#include<conio.h> 
int main()
{
	int no;
	int i,j;
	start:
	printf("The the number upto which you want even numbers to be printed out \n\b\b");
	scanf("%d",&no);
	printf("\n\n");
	//printf("The numbers are \n");
		if(no<=50)
 {
 	printf("The numbers are \n");
		
	for(i=0;i<=no;i++)
	{
		printf("%d \t",i);
	}
	printf("\n\n");
	printf("The prime numbers are \n");
	for(j=2;j<=no;j++)
	{
		if(j%2==0)
		{
				printf("%d \t",j);
		}
	}
	printf("\n\n");
	printf("The odd numbers are \n");
	for(j=3;j<=no;j=j+2)
	{
			printf("%d \t",j);
	}
 }	
 else
		{
			printf("Enter a lower number\n");
		}
	goto start;
	getch();
	return 0;
}
