#include<stdio.h>
int main()
{
	int i,max=0;
	int a[5];
	
	for(i=0;i<5;i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("the greatest value is:%d",max);
	
	return 0;
	
}
