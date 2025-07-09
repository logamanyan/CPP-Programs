#include<iostream>
using namespace std;
class Graph
{
	int graph[10][10]; //max 10 nodes
	int numv;
	bool directed;
public:
	Graph(int v,bool isdirected=false)
	 {
	 	numv=v;
	 	directed=isdirected;
	 	for(int i=0;i<numv;i++)
	 	{
	 		for(int j=0;j<numv;j++)
	 		{
	 			graph[i][j]=0;
			 }
		 }
	 }
	 void addEdge(int x,int y)
	 {
	 
	 	graph[x][y]=1;
	 }
	 void display()
	 {
	 	cout<<"Disaplay Matrix"<<endl;
	 	for(int i=0;i<numv;i++)
	 	{
	 		for(int j=0;j<numv;j++)
	 		{
	 			cout<<graph[i][j]<<" ";
			 }
			 cout<<endl;
		 }
	 }};
int main()
{
	int v =5;//cin>>verties
	Graph g(v,false);
	//add some edges
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(0,1);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.display();
	
}