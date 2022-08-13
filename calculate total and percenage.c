#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,total,percentage;
	printf("enter the marks in s1,s2,s3,s4 and s5");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	percentage=(total/500)*100;
	printf("total=%f,percentage=%f",total,percentage);
	return 0;
	
}
