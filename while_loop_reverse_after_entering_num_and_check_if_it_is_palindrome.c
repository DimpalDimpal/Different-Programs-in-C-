#include<stdio.h>
int main()
{
	int num,rev=0,rem,original;
	
	printf("enter num:");
	scanf("%d",&num);
	
	original=num;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	printf("rev num=%d\n",rev);
	
	if(rev=original)
	{
		printf("number is palindrome");
	}
	
	else
	{
		printf("number is not palindrome");
	}
	
	return 0;
}
