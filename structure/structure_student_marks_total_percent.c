#include<stdio.h>
#include<string.h>
struct student
       {
       	char name[30];
       	int rollno;
       	float s1,s2,s3,s4,s5,total,percent;
	   }student;
	   
int main()
{
    struct student P1;
	strcpy(P1.name,"geeta");
	printf("enter marks in 5 subjects:");
	scanf("%f%f%f%f%f",&P1.s1,&P1.s2,&P1.s3,&P1.s4,&P1.s5);
	P1.rollno=15;
	P1.total=P1.s1+P1.s2+P1.s3+P1.s4+P1.s5;
	P1.percent=((P1.total)/500)*100;
	
	printf("name=%s, ",P1.name);
	printf("rollno=%d\n",P1.rollno);
	printf("total=%.2f, ",P1.total);
	printf("percent=%.2f",P1.percent);
	
	return 0;
}
