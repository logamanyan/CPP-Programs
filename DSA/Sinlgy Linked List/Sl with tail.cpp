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
class Sl {
	private:
		Node *head;
		Node *tail;
	public:
		Sl() {
			head=tail=nullptr;
		}
		void insertAtBeg(int val) {
			Node *newnode =new Node(val);
			newnode->next=head;
			head=newnode;
			if(tail==nullptr) {
				tail=newnode;
			}

		} void insertAtEnd(int val) {
			Node *newnode=new Node(val);
			if(head==nullptr) {
				head=tail=newnode;
			}
			tail->next=newnode;
			tail=newnode;
		}
		
		void display() {
			Node *temp=head;
			while(temp!=nullptr) {
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL";
		}
};

int main() {
	Sl l;
	l.insertAtBeg(1);
	l.insertAtBeg(2);
	l.insertAtBeg(3);
	l.insertAtBeg(4);
	l.insertAtBeg(5);
	l.display();
	cout<<endl;
	l.insertAtEnd(6);
	l.display();
}
