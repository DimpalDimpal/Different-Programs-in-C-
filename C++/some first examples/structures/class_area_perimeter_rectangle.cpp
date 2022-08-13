#include<iostream>
using namespace std;

class rectangle
{
	private:
		int l,b,h,area,perimeter;
		public:
			void getdata()
			{
				cout<<"enter the value of l,b,h:";
				cin>>l>>b>>h;
			}
			void calculate()
			{
				area=l*b*h;
				perimeter=2*(l+b);
			}
			void displayarea()
			{
				cout<<"area="<<area;
			}
		    void displayperimeter()
		    {
		    	cout<<"perimeter="<<perimeter;
			}
};

int main()
{
	rectangle r1,r2;
	r1.getdata();
	r1.calculate();
	r1.displayarea();
	r1.getdata();
	r1.calculate();
	r1.displayperimeter();
	
	return 0;
}
