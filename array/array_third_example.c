#include<stdio.h>
int main()
{
	int i;
	int a[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
	return 0;
}
