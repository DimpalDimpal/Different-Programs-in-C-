#include<iostream>
using namespace std;

class maths
{
	private:
		float a,b,result;
		public:
			void getdata()
			{
				cout<<"enter the value of a,b:";
				cin>>a>>b;
			}
			void add()
			{
				result=a+b;
			}
			void sub()
			{
				result=a-b;
			}
			void div()
		    {
			result=a/b;
	      	}
	      	void mul()
	      	{
	      		result=a*b;
			}
		
			void displayresult()
			{
				cout<<"\nresult="<<result;
			}
};

int main()
{
	maths m1;
	m1.getdata();
	m1.add();
	m1.displayresult();
	m1.sub();
	m1.displayresult();
	m1.div();
	m1.displayresult();
	m1.mul();
	m1.displayresult();
	
	
	return 0;
	
}
