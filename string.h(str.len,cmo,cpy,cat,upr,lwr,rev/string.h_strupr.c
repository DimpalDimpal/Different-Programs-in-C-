#include<stdio.h>
#include<string.h>

int main()
{
		char a[20]="Ismt College";
	int length;
	
	//length=strlen(a);
	
	//printf("length=%d",length);
	
	//strrev(a);
	//printf("string after reverse=%s\n",a);
	
	//strlwr(a);
	//printf("printing in small letter=%s\n",a);
	
	printf("a=%s\n",a);
	strupr(a);
	printf("printing in capital a=%s",a);
	
    return 0;
}
