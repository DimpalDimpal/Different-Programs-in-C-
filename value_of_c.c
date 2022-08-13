#include<stdio.h>
int main()
{
float a,b,c;

printf("enter the value of a and b");
scanf("%f%f",&a,&b);

printf("choose option\n 1.add 2.sub 3.mul 4.div\n ");
scanf("%f",&c);

if(c=1)
{
printf("sum=%f",a+b);
}

else if(c=2)
{
	printf("difference=%f",a-b);
}

else if(c=3)
{
	printf("product=%f",a*b);
}

else if(c=4)
{
	printf("quotient",a/b);
}

else
{
	printf("wrong input");
}

return 0;
}
