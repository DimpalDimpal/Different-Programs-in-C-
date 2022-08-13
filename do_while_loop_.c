#include<stdio.h>
int main()
{
	int i,sum=0;
	do
	{
		printf("enter the value of i:");
		scanf("%d",&i);
		sum=sum+i;
	}
	while(i!=0);
	
	printf("sum=%d",sum);
	
	return 0;
}
