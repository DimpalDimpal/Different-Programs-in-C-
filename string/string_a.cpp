#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i,count,j;
	
	printf("enter the string:");
    scanf("%s",&a);

	for (count=0;a[count]!='\0';count++);//to count character
	j=count-1;
	
	for(i=0;i<count;i++)
	{
	b[i]=a[j];
	j--;	
	}
	
	b[i]='\0';

	printf("reverse=%s",b);
	
	
	return 0;
	
}
