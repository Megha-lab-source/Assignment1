#include <iostream>
using namespace std;

// Function for Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // found
        }
    }
    return -1; // not found
}

// Function for Binary Search
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid; // found
        }
        else if (arr[mid] < key) {
            low = mid + 1; // search right half
        }
        else {
            high = mid - 1; // search left half
        }
    }
    return -1; // not found
}

int main() {
    int n, key, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in sorted order: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    cout << "\nChoose Search Method:\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    int result;

    switch (choice) {
        case 1:
            result = linearSearch(arr, n, key);
            if (result != -1)
                cout << "Linear Search: Element found at index " << result << endl;
            else
                cout << "Linear Search: Element not found" << endl;
            break;

        case 2:
            result = binarySearch(arr, n, key);
            if (result != -1)
                cout << "Binary Search: Element found at index " << result << endl;
            else
                cout << "Binary Search: Element not found" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}