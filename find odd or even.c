#include<stdio.h>
int main()
{//program to find whether number is odd or even
int a,b;
printf("enter the value of a");
scanf("%d",&a);
b=a%2;//to find remainder
printf("reminder is %d\n",b);//\n to continue in the next line

if(b==0)//if condition is true
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
