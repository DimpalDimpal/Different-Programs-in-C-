#include<stdio.h>
int main()
{
	float r,l,b,h;
	int c;
	
	printf("choose option\n 1.area of circle\n 2.Area of rectangle\n 3.perimeter ofrectangle\n 4.volume of cube\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("enter the value of radius");
			scanf("%f",&r);
			printf("area of circle=%f",3.144*r*r);
			break;
		case 2:
			printf("enter the value of l and b");
			scanf("%f%f",&l,&b);
			printf("area of rectangle=%f",l*b);
			break;
		case 3:
			printf("enter the value of l and b");
			scanf("%f%f",&l,&b);
			printf("perimeter of rectangle=%f",2*(l+b));
			break;
		default:
			printf("enter the value of l,b,h");
			scanf("%f%f%f",&l,&b,&h);
			printf("volume of cube=%f",l*b*h);
			
	}
	return 0;
}
