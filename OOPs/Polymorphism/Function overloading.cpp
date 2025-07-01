//polymorphism
//compile time polymorphism
#include<iostream>
using namespace std;
class poly
{
	public:
		void add(int a,int b)
		{
			cout<<"Function 1 = "<<a+b;
		}
		void add(int a,int b, int c)
		{
			cout<<"Function 2 = "<<a+b+c;
		}
		void add(double a,double b)
		{
			cout<<"Function 3 = "<<a+b;
		}
	
}; // function name is same , but with diff signature
//either number of parameter must be diffrent or data type of parameter must be diff
int main()
{
	poly p1;
	p1.add(5,6); //fun-1 =11
	p1.add(5,6,7); //fun-2=18
	p1.add(4.6+5.9);//fun-3 
}