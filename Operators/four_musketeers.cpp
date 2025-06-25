#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    int x1,y1,x2,y2,x3,y3; 
    cin>>x1>>y1>>x2>>y2>>x3>>y3; // get the 6 integer input
    float x,y;
    x=float(x1+x2+x3)/3; //
    y=float(y1+y2+y3)/3;
    cout<<fixed <<setprecision(1)<<x<<endl;
    cout<<fixed <<setprecision(1)<<y<<endl;
    return 0;
}