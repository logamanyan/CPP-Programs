//Queue using LinkedList
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		
		Node (int val)
		{
			data=val;
			next=nullptr;}};

class QueueLinkedlist
{
    private:
	  Node *rear;
	  Node *front;
	public:
	  QueueLinkedlist()
	  {
	  	front=rear=nullptr;
		  }	
	  void enqueue(int val)
	  {
	  	Node *newnode =new Node(val);
	  	if(rear==nullptr)
	  	{
	  		rear=front=newnode;
		}
		rear->next=newnode;
	  	rear=newnode;
	}
	void dequeue()
	{
		if(front==nullptr)
		{
			cout<<"Queue Underflow";
		}
		Node *temp=front;//1000
		front=front->next;//1000->null
		if(front==nullptr)//if null there is no element 
		//if queue become empty
		{
			rear=nullptr;
		}
		delete(temp);
	}
	void peek()
	{
		cout<<front->data;
	}
	void isEmpty()
	{
		if(front==nullptr)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
	}
	void display()
	{
		Node *temp=front;
		while(temp!=nullptr)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}cout<<"NULL";
	}
	 
};

int main()
{
	QueueLinkedlist ql;
	ql.isEmpty();// yes
	cout<<endl;
	ql.enqueue(6);
	ql.enqueue(7);
	ql.enqueue(8);
	ql.enqueue(9);
	ql.enqueue(10);
	ql.display();//6->7->8->9->10->null
	cout<<endl;
	ql.peek();cout<<endl; //10
	ql.dequeue();
	ql.display();//7->8->9->10->null
	cout<<endl;
}