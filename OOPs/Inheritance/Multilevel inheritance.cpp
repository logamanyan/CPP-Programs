#include<iostream>
using namespace std;
class GrandFather
{
	public: 
	 GrandFather() //constructor
	 {
	 	cout<<"GF-cnstr";
	 }
	 void farm()
	 {
	 	cout<<"Grandfather's Farm house"<<endl;
	 }
	
};
class Father:public GrandFather
{
	public:
		Father()
		{
			cout<<"Fr cnstr";
		}
		int cash=20000;
		void house()
		{
			cout<<"Father's house"<<endl;
		}
	private:
	    int savings=50000;
	protected:
	    void bike()
		{
			cout<<"Father's bike";
		}		
};
class Child :public Father
{   public:
	Child()
	{
		cout<<"Child cnstr";
	}
	 int pocket=5000;
	 void mobile()
	 {
		cout<<"Child mobile phone";
	 }
};
int main()
{
Child c; // the chlid class use father class attributes public // object created for chlid class
c.house();
cout<<" cash from father "<<c.cash<<endl; // variable cash  from father class is called by object of child
cout<<" pocketmoney of child "<<c.pocket<<endl;
c.mobile();
c.farm(); //using object of child and accessing grandfather method  


}