#include<stdio.h>
#include<string.h>

int main()
{
	char a[20], b[20];
	int result;
	printf("enter character:");
	scanf("%s",a);
	
    strcpy(b,a);
    printf("value of b=%s\n",b);
	
	strrev(b);
	printf("reverse value of a=%s\n",b);
	
	result=strcmp(a,b);
	printf("%d",result);
	
	if(result=0)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not pallindrome");
	}
	
	return 0;
}
