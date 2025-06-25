#include <iostream>
using namespace std;
int main()
{
    int s,t; //  s is total number od student , t is number of teams
    cin>>s>>t;
    cout<<s/t<<endl; // prints the no.of students in each team
    cout<<s%t; // prints the no.of students left
    return 0;
 
}