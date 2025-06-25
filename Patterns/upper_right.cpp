#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int n=5;
	for(int i =0; i<n; i++) //row
	{
		for( int j=0; j<n-i; j++) // coloumn
		{
			cout<<"* "; // prints star

		}
		cout<<endl; // next line
	}



	return 0;
}