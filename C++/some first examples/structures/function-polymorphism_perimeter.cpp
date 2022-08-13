#include<iostream>
using namespace std;

class calculate
{
	public:
		void perimeter(float r)
		{
			cout<<"perimeter of circle:"<<2*3.142*r<<endl;
		}
		
		void perimeter(float l,float b)
		{
			cout<<"perimeter of rectangle:"<<2*(l+b);
		}
};

int main()
{
	calculate c;
	c.perimeter(4);
	c.perimeter(2,2);
	
	return 0;
}
