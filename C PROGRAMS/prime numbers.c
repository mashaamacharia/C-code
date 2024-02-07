#include<stdio.h> 
int main()
{
	int no;
	printf("Enter numbers");
	scanf("%d",&no);
	for(int i=2;i<=no;i++ );
	{
		int no=i,m=1
		for(int j=2;j<=no-1;j++)
		{
			if(no%j==0)
			m=1;	
		}
		if(m==1)
		printf("%d",no);
	}
}