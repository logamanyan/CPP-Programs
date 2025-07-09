#include<iostream>
#include<vector> //size can grow
using namespace std;
int main()
{
	vector<int> vec;
	vec.push_back(4);
	cout<<"Size"<<endl;
	cout<<vec.size()<<endl;vec.push_back(5);
	cout<<vec.size()<<endl;vec.push_back(6);
	cout<<vec.size()<<endl;vec.push_back(7);
	cout<<vec.size()<<endl;vec.push_back(8);
	cout<<vec.size()<<endl;
	cout<<"capacity "<<vec.capacity();
	// types of vector functions
	/*
     vec.pop_back();
     vec.v.size();
     vec.empty();
     v.clear()
}