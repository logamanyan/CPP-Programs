#include<iostream>
using namespace std;
int main()
{
	int b,a,c;
	cin>>b; // weight that the boat can handle
	cin>>a; // number of adult
	cin>>c; // number of children
	int ta = 75*a; // total weight of adults
	int ca= 30*c; // total weight of children
	int tt= ta+ca; // total weight on the boat
	if(tt<b)
	{
		cout<<"Boat is stable";
	}
	else
	{
		cout<<"Boat will drow";
	}

	return 0;
}
