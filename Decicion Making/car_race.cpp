#include <iostream>
using namespace std;

int main() {
	// Declare variables to store the road numbers and car number
	int road_a, road_b, road_c, car_number;

	// Input: Read the values of the roads and car number
	cin >> road_a >> road_b >> road_c >> car_number;

	// Determine the road using modulo operation
	int mod_value = car_number % 3;

	// Check which road the car should go to
	if (mod_value == 1) {
		// Car goes to Road A

		cout << "Car 1 goes into road A" << endl;

	}
	else if (mod_value == 2) {
		// Car goes to Road B

		cout << "Car 1 goes into road B" << endl;

	}
	else if (mod_value == 0) {
		// Car goes to Road C

		cout << "Car 1 goes into road C" << endl;

	}

	return 0;
}
