#include <iostream>
using namespace std;
int main()
{
   
   int r,c,tree;
   cin>>r;
   cin>>c;
   cin>>tree;
   int colnum = (tree-1)/r+1;
   if(colnum==2 || colnum==c-1)
   {
       cout<<"It is a mango tree";
   }
   else
   {
       cout<<"It is not a mango tree";
   }
   return 0;
}