#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of rows

    for (int i = 0; i < n; i++) {
        // Print spaces for formatting
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print the numbers in the row
        int val = 1;
        for (int k = 0; k <= i; k++) {
            cout << val << " ";
            val = val * (i - k) / (k + 1); // Next value using C(n, k)
        }

        cout << endl;
    }

    return 0;
}
