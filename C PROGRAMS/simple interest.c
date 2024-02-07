#include<stdio.h> 
float main()
{
	float si,p,r,t;
	printf("Enter the principle\n");
	scanf("%f",&p);
	printf("Enter the rate\n");
	scanf("%f",&r);
	printf("Enter the time\n");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest",si);
	return 0;
	
	
}