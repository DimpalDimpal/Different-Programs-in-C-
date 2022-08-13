#include<stdio.h>
#include<string.h>

int main()
{
	char a[20]="Ismt College";
	//int length;
	
	//length=strlen(a);
	
	//printf("length=%d\n",length);
	printf("string before reverse=%s\n",a);
	strrev(a);
	printf("string after reverse=%s",a);
	
	return 0;
}
