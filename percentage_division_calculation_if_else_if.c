#include<stdio.h>

int main()
{
float percent;

printf("enter the percentage you obtained");
scanf("%f",&percent);

if(percent>=80)
{
	printf("Distinction");
}

else if(percent>=60)
{
printf("First division ");	
}

else if(percent>=40)
{
	printf("Second division");
}

else
{
	printf("Fail");
}

return 0;
}
