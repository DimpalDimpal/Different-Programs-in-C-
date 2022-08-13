#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]="Ismt College";
	int result;
	char b[20]="kathmandu";
	
	result=strcmp(a,b);
	
	printf("%d",result);
	
	return 0;
}
