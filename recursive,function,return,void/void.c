#include<stdio.h>
void AreaOfCircle(float r)
{
	printf("area of circle=%f",3.142*r*r);
}

void AreaOfRectangle(float l,float b)
{
	printf("area of rectangle=%f",l*b);
}

void VolumeOfCuboid(float l, float b, float h)
{
	printf("volume of cuboid=%f",l*b*h);
}

void PerimeterOfRectangle(float l, float b)
{
	printf("perimeter of rectangle=%f",2*(l*b));
}

void PerimeterOfCircle(float r)
{
	printf("perimeter of circle=%f",2*3.142*r);
} 

int main()
{
	float r,l,b,h;
	int c;
	printf("enter case:\n 1)area of circle\n 2)area of rectangle\n 3)volume of cuboid\n 4)perimeter of rectangle\n 5)perimeter of circle\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			{
				printf("enter the value of r:");
				scanf("%f",&r);
				AreaOfCircle(r);
			}
			break;
			
		case 2:
			{
				printf("enter the value of l and b:");
				scanf("%f%f",&l,&b);
				AreaOfRectangle(l,b);
			}
		    break;
		case 3:
			{
				printf("enter the value of l,b,h");
				scanf("%f%f%f",&l,&b,&h);
				VolumeOfCuboid(l,b,h);
			}
			break;
			
		case 4:
			{
				printf("enter the value of l ,b:");
				scanf("%f%f",&l,&b);
				PerimeterOfRectangle(l,b);
			}
			break;
			
		case 5:
			{
				printf("enter the value of r:");
				scanf("%f",&r);
				PerimeterOfCircle(r);
			}
			break;
			
		default:
			{
				printf("invalid case");
			}
	}
	
	return 0;
	
}
