#include<stdio.h>

int main()
{
	int a=10;
	int *b;  //pointer variable is denoted as *NAME
	printf("value of a=%d, address of a=%x\n",a,&a);
	printf("the address location stored by b is %x\n",b);
	b=&a; //pointing address of a by b
	
	printf("the address location stored by b is %x",b);
	return 0;
}
