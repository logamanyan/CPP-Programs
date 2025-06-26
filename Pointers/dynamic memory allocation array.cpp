// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;//20
	//int arr[n];80
	int *arr=new int[n];//dynamic memory alloacation
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	delete[] arr;
	cout<<"New array size";
	cin>>n;
	arr=new int[n];
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	delete[] arr;
}