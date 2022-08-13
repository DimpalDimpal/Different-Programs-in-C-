#include<iostream>
using namespace std;

class Test
{
	private:
		int a,b,c,sum;
		public:
			void GetData()
			{
				cout<<"Enter the value of a b c:";
				cin>>a>>b>>c;
				
			}
			
			void Calculate()
			{
				sum=a+b+c;
			}
			void DisplaySum()
			{
				cout<<a<<"+"<<b<<"+"<<c<<"="<<"sum";
			}
			
};

int main()
{
	Test t1,t2;
	t1.GetData();
	t1.Calculate();
	t1.DisplaySum();
	t2.GetData();
	t2.Calculate();
	t2.DisplaySum();
	
	return 0;
}
