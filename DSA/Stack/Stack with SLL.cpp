#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *next;
		Node(int val) {
			data=val;
			next=nullptr;
		}
};
class StackL {
	private:
		Node *top;
	public:
		StackL() {
			top=nullptr;
		}
		void push(int val) {
			Node *newnode=new Node(val);
			newnode->next=top;
			top=newnode;
		}
		void pop()
		{
			if(top==nullptr)
			{
				cout<<"Stack underflow";
				return;
			}
			Node *temp=top;
			top=top->next;
			delete(temp);
		}
		void peek()
		{
		cout<<top->data<<endl;	
		}
		void isEmpty()
		{
			if(top==nullptr)
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
			Node *temp=top;
			if(temp==nullptr)
			{
				cout<<"Stack underflow";
				return;
			}
			else
			{
				while(temp!=nullptr)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}cout<<"Null";
				
			}
		}
		};
int main()
{
	StackL l;
	l.isEmpty();//yes
	cout<<endl;
	l.push(6);
	l.push(5);
	l.push(4);
	l.push(3);
	l.push(2);
	l.isEmpty();//no
	cout<<endl;
	l.peek();//2
	l.display();//2->3->4->5->6->null
	l.pop();//2
	cout<<endl;
	l.display();//3->4->5->6->null
	
		}		
