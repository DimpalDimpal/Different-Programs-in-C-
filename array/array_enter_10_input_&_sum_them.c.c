#include<stdio.h>
int main()
{
	int i,sum=0;
	int a[10];
	
	for(i=0;i<10;i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}

	printf("sum=%d",sum);
	
	
	return 0;
}
