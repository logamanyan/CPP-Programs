#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& arr, int key) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Not found
}

int main() {
    vector<int> arr = {11, 12, 22, 25, 64}; // Must be sorted
    int key = 22;

    int index = binarySearch(arr, key);

    if (index != -1)
        cout << "Index of " << key << ": " << index << endl;
    else
        cout << key << " not found in array." << endl;

    return 0;
}
