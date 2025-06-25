#include <iostream>
using namespace std;
int main()
{
 int r; // radius of the circl
 int l; // length or side of the square
 cin>>r;
 cin>>l;
 int d=2*r; // radius has half value do find diameter 0f the circle = 2*radius
 if(d<=l)
 {
     cout<<"circle can be inside a Square";
 }
 else

{
    cout<<"circle can be not inside a Square";
}
    return 0;
}