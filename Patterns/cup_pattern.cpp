#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string drink;
    cin >> drink; cin.ignore();
    int straw;
    cin >> straw; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if(straw==1)
    {
        cout<<"____|____"<<endl;
    }
    else
    {
        cout<<"_________"<<endl;
    }
    cout << "\\       /" << endl;
    cout<< " \\  "<<drink<<"  /"<<endl;
    cout <<"  \\___/";

}