#include<iostream>
using namespace std;
int main()
{
	int count;
	int a[10]={1,2,4,5,8};
	int temp=a[0];
	int n=5;
	int val =8;
	for(int i=1;i<n;i++)
	{
		 count++;
		 if(a[i]==val)
		 {
		 	cout<<a[i]<<" found in "<<i+1<<" position"<<endl;
		 	
		 }
		
		 
	}
	cout<<"Loop executed "<<count<<" times";
}