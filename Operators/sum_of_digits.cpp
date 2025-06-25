#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int sum = 0;

    while (x != 0) {
        int l = x % 10;  // Get the last digit, eg. x=123 get 3
        sum += l;        // Add it to sum  ,eg.sum=3
        x = x / 10;      // Remove the last digit from x by integer division eg.x=12
    }

    cout << sum;
    return 0;
}
