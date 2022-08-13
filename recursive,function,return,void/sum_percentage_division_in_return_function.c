#include<stdio.h>
float totalmarks(float s1,float s2,float s3,float s4,float s5)
{
	return s1+s2+s3+s4+s5;
}

float per(float total)
{
	return (total/500)*100;
}
void division(float per)
{
	if(per>=80)
	{
		printf("distinction\n");
	}
	else if(per>=60)
	{
		printf("first division\n");
	}
	else if(per>=50)
	{
		printf("second division\n");
	}
	else if(per>40)
	{
		printf("third division\n");
	}
	else
	{
		printf("fail\n");
	}
}
int main()
{
	float s1,s2,s3,s4,s5,sum,percent;
	printf("enter marks in 5 subject:");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	sum=totalmarks(s1,s2,s3,s4,s5);
	printf("total marks=%f\n",sum,percent);
	percent=per(sum);
	printf("percent=%f\n",percent);
	division(percent);
	
	
	return 0;
}
