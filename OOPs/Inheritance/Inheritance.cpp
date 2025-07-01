#include<iostream>
using namespace std;
class Father
{
	public:
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
	 int pocket=5000;
	 void mobile()
	 {
		cout<<"Child mobile phone";
	 }
};
int main()
{
	/*Father f1;
	f1.house();
	cout<<f1.cash; */ // it is the object created for father class
	
// we can use the father class attributes by creating object for child class which is inheritance from father class

Child c; // the chlid class use father class attributes public // object created for chlid class
c.house();
cout<<" cash from father "<<c.cash<<endl; // variable cash  from father class is called by object of child
cout<<" pocketmoney of child "<<c.pocket<<endl;
c.mobile();

}

//Types of Inheritance
/*
1.Single inheritance p-->c
2.Multi-level inheritance gp-->p-->c
3.Multiple inheritance f,m-->c
4.Hierarchical inheritance f-->c1,c2
5.Hybrid inheritance
*/
