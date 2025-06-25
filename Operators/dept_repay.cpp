#include <iostream>

using namespace std;
int main()
{
	int a,i,y;
	cin>>a>>i>>y;
	float intrest=(a*i*y)/100;
	float total_amount=intrest+a;
	float discount=intrest*0.02;
	float settle=total_amount - discount;
	cout<<fixed<<setprecision(2)<<intrest<<endl;
	cout<<fixed<<setprecision(2)<<total_amount<<endl;
	cout<<fixed<<setprecision(2)<<discount<<endl;
	cout<<fixed<<setprecision(2)<<settle<<endl;
return 0;
}