#include<stdio.h>
int main()
{
	int i,d,sum=0;
	
	for(i=0;i<=10;i+=1)
	{
		printf("enter number%d:",i);
		scanf("%d",&d);
		
		sum=sum+d;
	}
	
	printf("sum=%d",sum);
	
	return 0;
	
		
}
