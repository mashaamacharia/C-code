#include<stdio.h> 
int main()
{
	float amt,crditamt,debitamt;
	char ch;
	print("Enter the intial amount\n");
	scanf("%f",&amt);
	printf("Enter\nc for credit\nd for debit\nb for balance\n" );
	scanf("\n%c",&ch);
	switch(ch)
	{
		case "c':
			printf("Enter the crdit amount\n");
			scanf("%c",&creditamt);
			amt=amt+creditamt;
			printf("New amount=%f",amt);
			break;
		case'd':
		    printf("Enter the debit amount\n");
		    scanf("%c",%debitamt);
		    amt=amt-debitamt;
		    printf("New amount=%f",amt);
		    break;
		case'e':
			printf()
		
		
	}
}