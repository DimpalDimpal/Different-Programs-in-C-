#include<stdio.h>

int main()
{
	int a,b;
	
	printf("enter the value of a");
	scanf("%d",&a);
	
	b=a-6;
	printf("b=%d\n",b);
	
	if(b<0)
{
	
	printf("negative");
}
	
	else
{
	printf("positive");
}
	return 0;
}
