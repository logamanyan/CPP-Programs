#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x>>y;
    if(x>=0&&y>=0)
    {
        cout<<"I st Quadrant";
    }
    else if(x<=0&&y>=0)
    {
        cout<<"II nd Quadrant";
    }
    else if(x<0&&y<0)
    {
        cout<<"III rd Quadrant";
    }
    else if(x>=0&&y<=0)
    {
        cout<<"IV th Quadrant";
    }
    else{
        
    }

    
return 0;
}
    