#include<stdio.h> 
#include<string.h> 
int main()
{
	int regno;
	int a,b;
	int no=1-4;
	int p=68089;
	printf("Enter your registration number\n");
	scanf("%d",&regno);
	printf("Please enter your password\n");
	scanf("%d",&p);
	if(regno==345634721)
	{
		printf("Correct registation");
	}
	else if(p==68089)
	{
		printf("Correct password and login successful \n \n");
	
	printf("*****************WELCOME VICTOR ********** \n \n \n");
	printf("*****************CHUKA UNIVERSITY*********** \n\n \n");
	printf("Your name is : VICTOR MACHARIA \n \n \n");
	printf("Your faculty is : SCIENCE ENGINEERING AND TECHNOLOGY \n \n \n");
	printf("You are pertaking : APPLIED COMPUTER SCIENCE \n \n \n");
	printf("Enter number of your choice must be 1-4 \n \n");
	printf(" 1 for EXAM EVALUATION \n");
	printf(" 2 for STUDENT REMINDER \n");
	printf(" 3 for FINANCIAL DETAILS \n");
	printf(" 4 for STUDENTS DASHBOARD \n");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf("EXAM EVALUATION\n");
			if(no==1)
			{
				printf(  " PHY-B \n");
				printf(  " ASCS-A \n" );
				printf(  " COSC-A \n");
				printf(  " MATHS-A \n");
				printf(  " ECON-B \n");		
				break;
			}
			
	   case 2:
	   	    printf("STUDENT REMINDER \n \n");
	   	    if(no==2)
			   {
			   	printf("Always remember you left home to change home\n");
			   	break;
			   }
		case 3:
			printf("FINANCIAL DETAILS \n \n");
			if(no==3)
			{
			printf("Fees payment  and fees balance \n \n");
			}
			printf("Enter number of your choice 1-2");
			printf( " 1 for FEES PAYMENT \n");
			printf(" 2 for CHECK FEES BALANCE \n");
			scanf("%d%d",&a,&b);
			if(a==1)
			{
				printf("You can pay using the following banks \n \n \n");
				printf(  " BACLAYS BANK-4524654 \n");
				printf(  " EQUITY BANK-6463264 \n");
				printf(  " CO-OPERATIVE BANK-563576 \n");
				printf(  " FAMILY BANK-463473 \n \n");
				printf(  " ######  NO CASH WILL BE ACCEPTED  #####\n \n");
			}
			else if(b==2)
			{
				printf("Your fee balance is 2000 \n");
			}
			else
			{
				printf("INVALID NUMBER PLEASE PUT NUMBER 1 OR 2 \n \n");
			}
			break;
		case 4:
			printf("STUDENT DASHBOARD \n \n");
			if(no==4)
			 {
				printf(    " ################# WELCOME FEEL PART OF CHUKA FRATERNITY ############## \n \n"   );
				printf(    " NAME :Victor \n  "   );
				printf(    " COURSE :Applied computer science \n   "   );
				printf(    " FACULTY :Engineering and technology \n  "    );
				printf(    " UNIVERSITY :Chuka university  \n "   );
				break;
			}
		default:
		{
			printf("INVALID INPUT PLEASE PUT NUMBER 1-4 \n \n");
		}
	}
	}
	
	else
	{
		printf("LOGIN UNSUCCESSFULL PLEASE CHECK YOUR DETAILS AND TRY AGAIN");
	}
	return 0;			
}