#include<iostream>
using namespace std;

class printdata
{
	public:
		void print(int i)
		{
			cout<<"printing int:"<<i<<endl;
		}
		void print(double f)
		{
			cout<<"printing float:"<<f<<endl;
		}
		void print(char*c)
		{
			cout<<"printing character:"<<c<<endl
		}
};

int main (void)
{
printdata pd;
//call print to call integer


}
