#include<stdio.h>

int main()
{
	float r,area;
	
	printf("enter the radius of circle");
	scanf("%f",&r);
	area=(3.142)*r*r;//program gives wrong calculation for pie=22/7
	printf("area=%.2f",area);
	return 0;

}
