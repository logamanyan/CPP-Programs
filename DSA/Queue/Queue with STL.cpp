#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    // Creating a queue of integers
    queue<string> q;

    // Pushing elements into the queue
    q.push("aa");
    q.push("bb");
    q.push("cc");

    while (!q.empty()) {
        cout << q.front() << "->";
        q.pop();
    }cout<<"NULL";
    return 0;
    
}