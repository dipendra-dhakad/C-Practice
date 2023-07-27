#include <iostream>
#include <utility> // for std::pair

std::pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int floorVal = -1;
    int ceilVal = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] <= x) {
            floorVal = arr[mid];
            low = mid + 1; // Look for a larger element to get the ceil
        } else {
            high = mid - 1;
        }
    }

    // The ceil value will be the first element larger than x
    if (low < n) {
        ceilVal = arr[low];
    }

    return std::make_pair(floorVal, ceilVal);
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    std::pair<int, int> result = getFloorAndCeil(arr, n, x);
    std::cout << "Floor: " << result.first << ", Ceil: " << result.second << std::endl;

    return 0;
}
