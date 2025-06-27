#include<iostream>
using namespace std;
int main() {
	int a,b; //intialize a ,b
	cin>>a>>b;
	cout<<"before swapping"<<a<<endl<<b<<endl;
	int *p1= &a; //  *p1 store the ad of a
	int *p2= &b; // *p2 store the ad of b
//now start swapping two variable
	int temp= *p1; 
	*p1= *p2;
	*p2= temp;
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;

}