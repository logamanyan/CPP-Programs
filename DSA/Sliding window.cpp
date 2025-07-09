#include<iostream>
using namespace std;
int maxSum(int arr[],int n,int window_size)
{
	if(n<window_size)
	{
		cout<<"Invalid window size";
		return -1;
	}
	//calculate sum of first window w1: 1+2+3
	int w=0;
	for(int i=0;i<window_size;i++)
	{
		w+=arr[i]; // 1 -> 1+2 = 3-> 1+2+3 =6
		
	}
	int maxsum=w;
	// slide window
	for(int i=window_size;i<n;i++) // 3 to 9
	{
		w+=arr[i]-arr[i-window_size]; //3 4-1 = 3 // 4  5-2=3, // 5 6-4= 2 =8 //
		maxsum=max(maxsum,w);
	}
	return maxsum;
	
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int window_size;
	cin>>window_size;//3
	int n=sizeof(arr)/sizeof(arr[0]);//10
	cout<<"Max Window sum "<<maxSum(arr,n,window_size);
}