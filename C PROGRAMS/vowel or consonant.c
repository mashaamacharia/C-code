#include<stdio.h>
#include<conio.h> 
int main()

{
	char ch;
	printf("Enter any letter \n");
	scanf("%ch",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("The letter is a vowel \n");
	}
	else
	{
		printf("The letter is a consonet \n");
	}
	getch();
	return 0;
}