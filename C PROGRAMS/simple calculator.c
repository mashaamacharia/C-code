#include<stdio.h>
#include<conio.h> 
#include<math.h>
int main()
{
	float a,b,c;
	int no;
	start:
	printf("Enter the first number \n");
	scanf("%f",&a);
	printf("Enter the second number \n");
	scanf("%f",&b);
	printf("Enter the sign of your choice \n");
	printf("1= + \n");
	printf("2= / \n");
	printf("3= - \n");
	printf("4= * \n");
	scanf("%d",&no);
	if(no==1||no==2||no==3||no==4)
	{
		switch (no)
		{
			case 1:
			{
			  c=a+b;
			  printf("%f",c);
			  printf("\n");
			  goto start;	
			  break;
			}
			case 2:
			{
				c=a/b;
				printf("%f",c);
				printf("\n");
				goto start;
				break;
			}
			case 3:
			{
				c=a-b;
				printf("%f",c);
				printf("\n");
				goto start;
				break;
			}
			case 4:
			{
			    c=a*b;
				printf("%f",c);
				printf("\n");
				goto start;
				break;	
			}
		}
	}
	else
	{
		printf("INVALID INPUT PLEASE INPUT NUMBER 1_4 \n");
		goto start;
	}
	getch();
return 0;
}
