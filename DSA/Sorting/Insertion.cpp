#include<iostream>
using namespace std;
int main()

{
	int a[]={5,6,7,1,3,2,4,8};
	int n=sizeof(a)/sizeof(a[0]);//8
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++) //j=1
		{
			if(a[j]<a[i]) // 6<5 -> 7<5 -> 1<5 =s
			{
				int temp=a[i]; // t=5
				a[i]=a[j]; // i=1
				a[j]=temp; //j=5
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}