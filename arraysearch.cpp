#include <iostream>
using namespace std;

// Function to search element
int searchElement(int *arr, int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;   // return index if found
        }
    }
    return -1;   // if not found
}

int main() {
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];   // Variable Length Array (works in many compilers)

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = searchElement(arr, size, key);

    if(result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}