#include<stdio.h>
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n,fact;
	
	printf("enter the value of n:");
	scanf("%d",&n);
	
	fact=factorial(n);
	
	printf("factorial=%d",fact);
	
	return 0;
}
