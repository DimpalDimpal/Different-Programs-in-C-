#include<stdio.h>
int main()
{
	
	float a,b,c,d;
	
	printf("enter the value of a,b,c and d");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	if (a>b)
	{
		if(a>c)
		{
	     if (a>d)
	     {
	     	printf("a is great");
		 }
		 else
		 {
		 	printf("d is great");
		 }
		}
		else
		{
		if(c>d)
		{
			printf("c is great");
		}
		else
		{
			printf("d is great");
		}
	    } 
		
	}
	else
	{
		if(b>c)
		{
		if(b>d)
		{
			printf("b is great");
		}
		else
		{
			printf("d is great");
		}
		}
		else
		{
			if(c>d)
			{
				printf("c is great");
			}
			else
			{
				printf("d is great");
			}
		}
	}
	
	return 0;
}
