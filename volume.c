#include<stdio.h>

int main()
{
	float l,b,h,volume;
	
	printf("enter length,breadth and height");
	
	scanf("%f%f%f",&l,&b,&h);
	
	volume=l*b*h;
	
	printf("volume=%f",volume);
	
	return 0;
}
