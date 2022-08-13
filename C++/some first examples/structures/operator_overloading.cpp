#include<iostream>
using namespace std;
class test
{
	private:
		int count, a ,b;
	public:
		test()
		{
			count=5;
		}
		void operator+()
		{
			count++;
		 } 
		void display()
		{
			cout<<"count="<<count<<endl;
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
