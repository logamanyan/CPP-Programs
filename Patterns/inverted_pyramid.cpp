#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i =0; i<n; i++) // give row
	{
		for( int j=0; j<=i; j++) // give space 
		{
			cout<<" ";

		}
 		for(int k=0; k<n-i; k++) // give shape
		{
			cout<<"* ";
		}
		cout<<endl;
	}



	return 0;
}