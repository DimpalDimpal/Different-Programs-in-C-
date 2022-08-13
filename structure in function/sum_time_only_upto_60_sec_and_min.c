#include<stdio.h>
typedef struct time
    {
    	int hr,min,sec;
	}time;
time Addtime(time t1,time t2)
{
	time temp;
	temp.hr=t1.hr+t2.hr;
	temp.min=t1.min+t2.min;
	temp.sec=t1.sec+t2.sec;
	
	temp.min=temp.min+temp.sec/60;
	temp.sec=temp.sec%60;
	temp.hr=temp.hr+temp.min/60;
	temp.min=temp.min%60;
	
	return temp;
}

int main()
{
	time t1,t2,t3;
	printf("enter time one:");
	scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
	
	printf("enter t2:");
	scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
	
	t3= Addtime(t1,t2);
	
	printf("sum of time=%dh%dm%ds",t3.hr,t3.min,t3.sec);
	
	return 0;
}
