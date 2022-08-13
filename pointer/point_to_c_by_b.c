#include<stdio.h>

int main()
{
	int a=10, c=20;
	int *b;  //pointer variable is denoted as *NAME
	printf("value of a=%d, address of a=%x\n",a,&a);
	printf("the address location stored by b is %x\n",b);
	b=&a; //pointing address of a by b
	
	printf("the address location stored by b is %x\n",b);
	
	b=&c;
	printf("the address location by b is %x\n",b);
	printf("the address %x contain a value %d",b,*b);
	
	return 0;
	
}
