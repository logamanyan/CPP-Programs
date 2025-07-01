#include<iostream>
using namespace std;
class Employee1
{
	public:
		void leave()
		{
			cout<<"I need 2 days of leave";
		}
		virtual void reason()= 0;//pure virtual
		//instance
};//abstract
class Employee2:public Employee1
{
	public:
		void reason()
		{
			cout<<"Going for a movie";
		}
};
int main()
{
	
	Employee2 e1;e1.leave();//e1.reason();
}