#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,k,result[3][3];
	
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
		result [i][j]=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",result[i][j]);
			if(j=3-1)
			printf("\n\n");
		}
	}
	
	return 0;
}
