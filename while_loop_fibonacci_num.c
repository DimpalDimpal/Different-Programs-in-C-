#include<stdio.h>
int main()
{
	int a=0,b=1,d=0,c;
	
	printf("%d\n%d\n",a,b);
	
	while(d<=10)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		d++;
	}
	
	return 0;
}
