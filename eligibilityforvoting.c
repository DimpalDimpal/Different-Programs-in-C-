#include<stdio.h>
int main()

{
int a;
	
printf("enter the age of a");
scanf("%d",&a);
	
printf("age=%d\n",a);
	
if(a<18)
{
printf("not eligible");
}
else
{
printf("eligible");
}
return 1;
}
