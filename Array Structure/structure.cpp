//arrays -structures and union
#include<iostream>
using namespace std;
struct details
{
	char name[20];
	int age;
}; // size of struct 20+4 = //>=24
int main ()
{
 details s1 = {"aaa",17}; //sep s1[24]
 details s2 = {"bbb",16}; //s2[24]
 cout<<"s1 details"<<s1.name<<endl;
 cout<<" s2 details"<<s2.age;
	
}