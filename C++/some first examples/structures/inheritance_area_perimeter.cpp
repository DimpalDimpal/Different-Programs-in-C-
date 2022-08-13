#include<iostream>
using namespace std;

class shape
{
	public:
	float l,b,r,area,perimeter;
	
		void getdata()
		{
			cout<<"enter the value of l,b,r:";
			cin>>l>>b>>r;
		}
};

class child:public shape
{
	public:
		void aor()
		{
			aor=l*b;
		}
		void por()
		{
			por=2*(l+b);
		}
		void aoc()
		{
			aoc=3.142*r*r;
		}
		void poc()
		{
			poc=2*3.142*r;
		}
		
		void displayaor()
		{
			cout<<"aor="<<aor;
		}
		void displayaoc()
		{
			cout<<"aoc="<<aoc;
		}
		
	void displayy5()
	{
		cout<<"perimeter="<<perimeter;
	}
};
	int main()
	{
		child c1;
		c1.getdata();
		c1.aor();
		c1.displayarea();
		c1.por();
		c1.displayperimeter();
		return 0;
	}
	

