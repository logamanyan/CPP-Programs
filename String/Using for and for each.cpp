#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string name = "Hello world";
	for (int i=0;i<name.length();i++)
	{
		cout<<name[i]<<"*";
		
	}
	cout<<"For each\n";
	for(char i:name)
	{
		cout<<i<<"*";
	} 
}