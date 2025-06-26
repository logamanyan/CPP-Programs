#include<iostream>
using namespace std;
 int main()
 {
 	int a=5;// ad=1000
 	int *ptr=&a;// pointer variable store address of a ad=2000
	int**ptr2=&ptr; // ptr2 value -->2000--->1000-->5  ad =3000 
 	
 	cout<<"value of ptr 2 "<<ptr2<<endl; // print the address of a ie store in ptr
 	cout<<"address of ptr2 "<<&ptr2<<endl;//print the address of ptr2
 	cout<<"address of a "<<&a<<endl; // prints the address of a
 	cout<<"address of ptr "<<&ptr<<endl; // print the address of ptr 
 	cout<<" single de- referencing "<<*ptr2<<endl; //it prints the value of the variable which store in ptr 
 	cout<<"double de referencing "<<**ptr2;
 	return 0;
 }