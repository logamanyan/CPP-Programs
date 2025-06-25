#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int square = num * num; // square the number
    int temp = num; // store the original num 
    int digits = 0;

    while (temp > 0) // this is for countinfg the digit 
	{
        digits++; 
        temp /= 10; //remove the last digit
    }

    int mod = pow(10, digits); //  help extract the last digits digits from the square.

 
    int lastDigits = square % mod; //extract the last digits digits from the squaer.

    if (lastDigits == num) 
	{
        cout << num << " is an Automorphic number." << endl;
    } else {
        cout << num << " is not an Automorphic number." << endl;
    }

    return 0;
}
