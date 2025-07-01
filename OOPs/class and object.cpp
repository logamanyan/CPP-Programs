#include<iostream>
using namespace std;
class hall3
{
public :
int fan=3;
float ac=10.0f;
void projector(int a)
{
	cout<<"Projector is installed in cabin "<<a<<endl;
	}	
};
int main()
{
	hall3 h3;
	cout<<sizeof(h3);
	h3.projector(3);
	cout<<h3.fan<<endl;
	cout<<h3.ac;
}