#include<iostream>
using namespace std;
int main()

{
	int a[]={5,6,7,1,3,2,4,8};
	int n=sizeof(a)/sizeof(a[0]);//8
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1]) //
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int x:a)
	{
		cout<<x<<" ";
	}
}