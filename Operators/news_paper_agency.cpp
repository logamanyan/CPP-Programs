#include <iostream>
using namespace std;
int main()
{
    int w,x,y;
    cin>>w>>x>>y;
    /*w is number of copy sold x is cost per copy, y is cost to agency per copy */
    int storage = 100;
    //cin>>storage;
    int rev=w*x;
    int inv=rev-(w*y);
    cout<<inv-storage;
    return 0;
 
}