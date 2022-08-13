#include<stdio.h>

int main()
{
	
	float C,F;
	
	printf("enter F");
	 scanf("%f",&F);
	  
	C=((F-32)/180)*100;
	
	printf("C=%.2f",C);//.2f gives only 2 decimal after .
	
	return 0;
}
