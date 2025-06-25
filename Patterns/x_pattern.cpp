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
		    if(i+j==n-1||i==j) // i==j for diagonal (0,0),(1,1),(2,2),(3,3),(4,4)
		    {                  //i+j==n-1
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