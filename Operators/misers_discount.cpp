
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float i1,i2,dis,t,d_t,diff; // price of item1 i1, item2 as i2, discount percentage as dis, 
    cin>>i1>>i2>>dis;
    t= i1+i2;
    d_t=float(t-((dis*t)/100));
    diff= t-d_t;
    cout<<t<<endl;
    cout<<d_t<<endl;
    cout<<diff<<endl;
    
  

    return 0;
}