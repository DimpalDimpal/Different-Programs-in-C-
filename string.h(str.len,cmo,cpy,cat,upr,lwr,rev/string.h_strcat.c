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
	
	//printf("\n value of b before copy=%s\n",b);
	
	//strcpy(b,a);
	//printf("\nvalue of b after copy=%s\n",b);
	
	printf("value of a before concatenation=%s\n",a);
	strcat(a,b);
	
	printf("after concatenation a=%s",a);
	
    return 0;
}
