#include <iostream>
using namespace std;

// (a) Linear Time Method
int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return n; // If first n-1 numbers are present, missing is n
}

// (b) Binary Search Method
int findMissingBinary(int arr[], int n) {
    int left = 0, right = n - 2; // because array size is n-1
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == mid + 1) {
            // Missing number is on the right side
            left = mid + 1;
        } else {
            // Missing number is on the left side
            right = mid - 1;
        }
    }
    return left + 1;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n-1];
    cout << "Enter " << n-1 << " elements in sorted order (from 1 to " << n << " with one missing):\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int choice;
    cout << "\nChoose method:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    int missing;
    switch (choice) {
        case 1:
            missing = findMissingLinear(arr, n);
            cout << "Missing number (Linear): " << missing << endl;
            break;
        case 2:
            missing = findMissingBinary(arr, n);
            cout << "Missing number (Binary Search): " << missing << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
