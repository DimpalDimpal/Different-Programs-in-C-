#include<iostream>
using namespace std;

class test
{
	private:
		int a, b, c;
		public:
			test()
			{
				a=1;
				b=1;
				c=1;
			}
			void operator+()
			{
				a=a*5;
				b=b*6;
				c=c*7;
			}
			void display()
			{
				cout<<"\na="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
			}
};

int main()
{
	test t;
	t.display();
	+t;
	t.display();
	return 0;
}
