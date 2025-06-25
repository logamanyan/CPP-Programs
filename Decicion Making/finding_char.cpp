#include <iostream>
using namespace std;

int main() {
    char ch;

    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase letter" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    }
    else {
        cout << "Symbol" << endl;
    }

    return 0;
}
