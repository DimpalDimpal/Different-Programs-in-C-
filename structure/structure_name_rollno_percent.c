#include<stdio.h>
#include<string.h>
struct person //typedef
       {
       	char name[20];
       	int rollno;
       	float percent;
	   };
	   
int main()
{
	struct person P1;  //delete struct
	strcpy(P1.name,"Swastima");
	P1. rollno=20;
	P1.percent=30;
	printf("name=%s\n",P1.name);
	printf("roll no=%d\n",P1.rollno);
	printf("percent=%f\n",P1.percent);
	return 0;
}
