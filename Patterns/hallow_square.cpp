#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int n=5;
	for(int i =0; i<n; i++) // rows
	{
		for( int j=0; j<n; j++) //coloumns
		{
		    if(i==0||j==0||j==n-1||i==n-1)
		    {
		       	cout<<"* "; 
		    }
		    else
		    {
		        cout<<"  ";
		    }
		

		}
		cout<<endl;
	}



	return 0;
}