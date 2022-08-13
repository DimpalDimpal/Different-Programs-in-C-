#include<iostream>
using namespace std;

class a
{
protected:
int A,B,sum;

public:
void getdata()
{
cout<<"enter the value of A and B:";
cin>>A>>B	;
}	
};

class b:public a
{
	public:
	void calculate()
	{
		sum=A+B;
	}
};

class c:public b
{
	public:
	void displaysum()
	{
		cout<<"sum="<<sum;
	}
};

int main()
{
	c c1;
	c1.getdata();
	c1.calculate();
	c1.displaysum();
	
	return 0;
}
