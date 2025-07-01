#include<iostream>
using namespace std;
union details
{
	char name[20];
	int age;
}; // size of struct 20+4 = //>=24
int main ()
{
	details s1;
 s1.age = 17; //sep s1[24] //s2[24]
 cout<<"s1 age"<<s1.age<<endl;
 
	
}