#include<iostream>
#include<queue>
using namespace std;
int main()

{
	priority_queue <int , vector<int> ,greater<int>> minpq; //min heap
	minpq.push(5);
	minpq.push(8);
	minpq.push(7);
	
	//Top element will be largest 
	cout<<minpq.top(); //output 5
	
	
}