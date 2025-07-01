#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) { // Line numbers: 1 to n
        for (int j = 0; j <n; j++) { // Always print 5 positions
            if (i % 2 == 0 ||j%2==0||i==0||j==0||i==n-1||j==n-1) {
                cout << "* "; // Skip positions 2 and 4 on even lines
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
