#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,total,percent;
	
	printf("enter your marks in 5 subjects");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	
	total=s1+s2+s3+s4+s4;
	percent=(total/500)*100;
	
	printf("total=%f,percent=%f\n",total,percent);
	
	if(percent>=80)
	{
		printf("distinction");
	}
	
	else if(percent>=60)
	{
		printf("first division");
	}
	
	else if(percent>=40)
	{
		printf("second division");
	}
	else
	{
		printf("fail");
	}
	
	return 0;
}
