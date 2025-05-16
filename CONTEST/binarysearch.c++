#include <iostream>
using namespace std;

int binarysearch(int arr[], int tar, int n) {
    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (arr[mid] < tar)
            st = mid + 1;
        else if (arr[mid] > tar)
            end = mid - 1;
        else
            return mid;
    }

    return -1;
}

int main() {
    int n, m,tar;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i <= m; i++){
        cin >> tar;    

    if (binarysearch(arr, tar, n) == -1)
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;
    }

    return 0;
}
