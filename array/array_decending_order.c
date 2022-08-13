#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	
	for(i=0;i<10;i++)
	{
		printf("please enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	return 0;
}
