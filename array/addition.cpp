#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,sum[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the value of a[%d][%d],b[%d][%d]",i,j,i,j);
			scanf("%d%d",&a[i][j],&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		
		printf("\n");
	}
	return 0;
}
