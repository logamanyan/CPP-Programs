#include<iostream>
using namespace std;
 int main()
 {
 	int a=5;//
 	int *ptr=&a;// pointer variable store address of a
 	cout<<"value of ptr "<<ptr<<endl; // print the address of a ie store in ptr
 	cout<<"address of a "<<&a<<endl; // prints the address of a
 	cout<<"address of ptr "<<&ptr<<endl; // print the address of ptr 
 	cout<<"de- referencing "<<*ptr; //it prints the value of the variable which store in ptr 
 }