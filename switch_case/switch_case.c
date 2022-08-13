#include<stdio.h>
int main()
{
	
	float a,b;
	int c;
	
	
	printf("enter the value ofa and b");
	scanf("%f%f",&a,&b);
	
	printf("enter case\n 1.add\n 2.sub\n 3.mul\n 4.div\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("sum=%f",a+b);
	        break;
	
	    case 2:
	    	printf("diff=%f",a-b);
	    	break;
	
	    case 3:
		    printf("mul",a*b);
			break;
			
		case 4:
		    printf("div=%f",a/b);
			break;
			
		default:
		    printf("invalid input");	
	}
	return 0;
}
