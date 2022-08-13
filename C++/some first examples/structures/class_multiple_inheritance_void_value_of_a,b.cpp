#include<iostream>
using namespace std;
 class A
 {
 	protected:
 		int A;
 	public:
 		void getA()
 		{
 			cout <<"enter the value of A:";
 			cin>>A;
		 }
 };
 
 class B
 {
 	protected:
 		int B;
 	public:
 		getB()
 		{
 		cout<<"enter B:";
 		cin>>B;
		 }
 };
 
 class C: public A,public B
 {
 	public:
 		void displayA()
 		{
 			cout<<"value of A:"<<A;
		 }
		 void displayB()
		 {
		 	cout<<"\nvalue of B:"<<B;
		 }
 };
 
 int main()
 {
 C C1;
 C1.getA();
 C1.getB();
 C1.displayA();
 C1.displayB();
 
 return 0;
}
