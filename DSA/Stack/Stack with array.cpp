#include<iostream>
using namespace std;
class StackArray {
		int arr[10];
		int top;
	public:
		StackArray() {
			top=-1;

		} void push(int val) {
			if(top==9)
			{
				cout<<"Stack overflow";
				return;
			}
			arr[++top]=val;
		}
		void pop() {
			if(top==-1)
			{
				cout<<"Stack underflow";
			}
			top--;
		}
		void isEmpty() {
			if(top==-1) {
				cout<<"Yes";
			} else {
				cout<<"No";
			}
		}
		void peek() {
			cout<<arr[top];
		}
		void display() {
			cout<<"Stack using array \n";
			for(int i=top; i>=0; i--) {
				cout<<arr[i]<<"->";
			}
			cout<<"NULL";
		}
};
int main()
{
 StackArray s;
 s.isEmpty();//yes
 cout<<endl;
 s.push(1);
 s.push(2);
 s.push(3);
 s.push(4);
 s.display();//4->3->2->1->null 
 cout<<endl;
 s.pop();
 s.display();//3->2->1->null
 cout<<endl;
 s.peek();//3
}