#include<iostream>
using namespace std;
int sum(int a,int b,int c,int d,int e)
{
	return a+b+c+d+e;
}
int main()
{
	int a,b,c,d,e,sum;
	cout<<"enter five no:";
	cin >>a>>b>>c>>d>>e;
	sum=a+b+c+d+e;
	cout<<"sum"<<sum;
	
	return 0;
	
}

