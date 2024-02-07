#include<stdio.h> 
int main()
{
	int w,x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	w=(x+y+z)/3;
	if(w>=90)
	{
		printf("The grade is A");
	}
	else if(w>=75)
	{
		printf("The grade is B");
	}
	else if(w>=60)
	{
		printf("The grade is C");
	}
	else if(w>=40)
	{
		printf("The grade is D");
	}
	else
	{
		printf("The grade is F");
	}
	return 0;
	
		
	
	
}