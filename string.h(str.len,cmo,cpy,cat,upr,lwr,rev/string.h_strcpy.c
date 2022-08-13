#include<stdio.h>
#include<string.h>

int main()
{
		char a[20]="Ismt College";
	int length;
	char b[20]="kathmandu";
	
	length=strlen(a);
	
	printf("length=%d\n",length);
	
	//strrev(a);
	//printf("string after reverse=%s\n",a);
	
	//strlwr(a);
	//printf("printing in small letter=%s\n",a);
	
	//strupr(a);
	//printf("printing in capital=%s\n",a);
	
	printf("value of b before copy=%s\n",b);
	
	strcpy(b,a);
	printf("value of b after copy=%s",b);
	
    return 0;
}
