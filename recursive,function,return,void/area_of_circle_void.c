#include<stdio.h>
void AreaOfCircle(float r)
{
	printf("area of circle=%f",3.142*r*r);
}
int main()
{
	float r;
	printf("enter the value of r:");
	scanf("%f",&r);
	
	AreaOfCircle(r);
	
	return 0;
}
