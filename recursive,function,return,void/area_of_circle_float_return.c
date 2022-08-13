#include<stdio.h>
float area(float r)
{
	return 3.142*r*r;
}
int main()
{
	float r,a;
	printf("enter radius:");
	scanf("%f",&r);
	a=area(r);
    printf("area=%f",a);
	
	return 0;
}
