#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *left;
		Node *right;
		Node(int val) {
			data=val;
			right=left=nullptr;
		}
};
class Bst {
	private:
		Node *root;
	public:
		Bst() {
			root=nullptr;
		}
		void insert(int val) {
			Node *newnode =new Node(val);
			if(root==nullptr) {
				root=newnode;
				return;
			}
			Node *temp=root;
			Node *tempptr=nullptr;
			while(temp!=nullptr) {
				tempptr=temp;
				if(val<temp->data) {
					temp=temp->left;
				} else if(val>temp->data) {
					temp=temp->right;

				} else
					return;

			}
			if(val<tempptr->data) {
				tempptr->left=newnode;
			} else {
				tempptr->right=newnode;
			}

		}
		void search(int val) {
			Node *temp=root;
			if(temp==nullptr) {
				cout<<"tree is empty";
				return;
			}
			while(temp!=nullptr) {
				if(val==temp->data) {
					cout << "Value " << val << " found in the tree.\n";
					return;
				} else if(val<temp->data) {
					temp = temp->left;
				}
		 else {
				temp = temp->right;
			}
			
			
		}cout << "Value " << val << " not found in the tree.\n";
		}

		


};
int main() {
	Bst b;
	
	b.insert(56);
	b.insert(45);
	b.insert(65);
	b.search(45);
	b.search(85);
}