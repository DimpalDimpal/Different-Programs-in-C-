#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	
	printf("enter number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	printf("revnum=%d",rev);
	
	return 0;
	
}
