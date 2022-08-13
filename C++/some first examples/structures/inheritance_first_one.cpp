#include<iostream>
using namespace std;
class parent 
{
	//protected:
	int a,b,sum;
	public:
		void getdata()
		{
			cout<<"enter value of a,b:";
			cin>>a>>b;
		}
		void displaydata()
		{
			cout<<"value of a="<<a<<"\nb="<<b;
		}
};

class child:public parent
{
	//public:
	//void adddata()  //if protected is written above
	//{
		//sum=a+b;
	//}
	//void displaysum()
	//{
		//cout<<"sum="<<sum;
	//}
};

int main()
{
	child c1;
	c1.getdata();
	c1.displaydata();
	//c1.adddata();
	//c1.displaysum();
return 0;

}


