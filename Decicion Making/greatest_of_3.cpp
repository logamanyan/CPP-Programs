#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" "<<"is greater";
    }
    else if(b>a && b>c){
        cout<<b<<" "<<"is greater";
    }
    else{
         cout<<c<<" "<<"is greater";
    }
    return 0;
}