#include<stdio.h>
int main()
{
	char a[13]="Ismt College";
	int i;
	
	for(i=13;i<='\0';i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
