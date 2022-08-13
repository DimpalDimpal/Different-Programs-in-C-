#include<stdio.h>
int main()
{
int age;

printf("enter the age");
scanf("%d",&age);

if(age>=80)
{
printf("very old");
}

else if(age>=50)
{
printf("old");
}

else if(age>=20)
{
	printf("youth");
}

else if(age>=13)
{
	printf("teenager");
}

else
{
	printf("children");
}

return 0;
}
