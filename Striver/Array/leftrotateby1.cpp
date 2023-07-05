#include <iostream>
using namespace std;

void rotateArray(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main() {
    int arr[5] = {3, 4, 2, 1, 5};
    int n = 5;

    rotateArray(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
