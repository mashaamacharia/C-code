#include<stdio.h> 
int main()
{
	int i,j,sum=1;
	int a[5];
        for(i=0;i<5;i++)
		{
			printf("%d\t",i+1);
			scanf("%d",&a[i]);
		}
		for(j=0;j<5;j++)
		{
			printf("The value of a at [%d]=%d \n",j,a[j]);
			sum=sum+a[j];
			//printf("sum is%d\n",sum);
		}
    	printf("sum is%d\n",sum);
    return 0;
}