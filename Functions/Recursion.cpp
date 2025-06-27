#include<iostream>
using namespace std;

void hi(int i)
{
	if(i<5) // base case
	{
		cout<<"Hi"<<endl;
		i++;
		hi(i); // recursive case 
	}
}
int main()

{
 hi(1);
 
 
}