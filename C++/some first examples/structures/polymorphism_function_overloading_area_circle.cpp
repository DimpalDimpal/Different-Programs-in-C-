#include<iostream>
using namespace std;

class calculate
{
	public:
		void area(float r)
		{
			cout<<"area of circle:"<<3.142*r*r;
		}
		
		void area(float l, float b)
		{
			cout<<"\narea of rectangle:"<<l*b;
		}
};

int main()
{
	calculate C;
	C.area(7);
	C.area(8,9);
	
	return 0;
}
