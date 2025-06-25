#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i+j==n-1||i==n-1) // i==0 for 1st row , i+j==n-1 for / , i==n-1 for last row
            {
                cout<<"* "; //give 1 space
            }
            else
            {
               cout<<"  "; // give 2 space
            }
        }
        cout<<endl;
    }
}