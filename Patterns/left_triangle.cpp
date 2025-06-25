#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i =0; i<n; i++) // rows
	{
		for( int j=0; j<n-i-1; j++) //coloumns
		{
			cout<<"  ";
		}

		for(int k=0; k<=i; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}



	return 0;
}