#include<stdio.h>
int main()
{
	int i,a,factorial=1;
	
	printf("enter number:");
	scanf("%d",&a);
	
	for(i=a;i>=1;i-=1)
	{
		factorial=factorial*i;
	}
	
	printf("factorial=%d",factorial);
	
	return 0;
}
