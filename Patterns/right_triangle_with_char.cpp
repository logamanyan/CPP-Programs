#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(char j=0;j<=i;j++)
        {
            
        char b='A'+j ;
         
        cout<<char(b)<<" ";
       
        }
         
        cout<<endl;
    }
}