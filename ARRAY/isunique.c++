#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The unique element is " << findUnique(arr, size) << endl;
    return 0;
}
