#include<stdio.h> 
#include<math.h> 
int main()
{
	int a,b,c,d;
	int res;
	int op;
	printf("Enter numbers of your choice\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("Enter operation of your choice\n");
	scanf("%d",&op);
	if(op==1)
	{
		res=(a+b+c+d);
		printf("The sum of all the numbers is %d",res);
	}
	else if(op==2)
	{
		res=((a*a)+(b*b)+(c*c)+(d*d));
		printf("The sum of squares of all the numbers is %d",res);
	}
	else if(op==3)
	{
		res=(sqrt(a),sqrt(b));
		printf("The square root of the first two numbers is %d",res );
	}
	else if(op==5)
	{
		res=(cbrt(a+b+c));
		printf("The cuberoot of the sum of the first three numbers is %.2f",res);
	}
	else if(op==6)
	{
		res=(sin(a)+sin(b)+sin(c));
		printf("The sum of the cotan of the first three numbers is %.2f",res);
	}
	return 0;
}