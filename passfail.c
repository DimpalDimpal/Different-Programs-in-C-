#include<stdio.h>
int main()

{
	float s1,s2,s3,s4,s5,total,percentage;
	
	printf("enter marks in 5 subjects");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	
	total=s1+s2+s3+s4+s5;
	percentage=((total/500)*100);
	
	printf("total=%f,percentage=%f\n",total,percentage);
	
	if(percentage>=40)
	{
		printf("pass");
	
	}
	else
	{
		printf("fail");
	}
	return 0;
	
}

