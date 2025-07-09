#include<iostream>
#include<queue>
using namespace std;
int main()

{
	priority_queue <int> pq; //max heap
	pq.push(5);
	pq.push(8);
	pq.push(7);
	
	//Top element will be largest 
	cout<<pq.top(); //output 8
	
	
}