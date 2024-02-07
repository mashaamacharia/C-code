#include<stdio.h>
#include<conio.h>
int main()
{
	int no;
	int i,j;
	start:
	printf("Enter up to the number you want even numbers to be printed  \n");
	scanf("%d",&no);
	printf("\n");
	for(i=0;i<=no;i++)
	{
		if(no<=40)
		{
			printf("%d \t",i);
		}
		else
		{
			printf("Please enter a lower figure that is 40 or below \n\n");
			goto start;
		}
	}
	printf("\n\n\n");
	printf("The even numbers are \n");
	
	for(j=2;j<=no;j++)
	{
			if(no%3==0)
			{
				printf("%d \t",j);
			}
	}
}
