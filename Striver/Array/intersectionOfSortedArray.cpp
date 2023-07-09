// #include <iostream>
// #include <set>
// using namespace std;

// void findArrayIntersection(int* arr1, int n, int* arr2, int m)
// {
//     set<int> intersection;
//     int i = 0, j = 0;

//     while (i < n && j < m) {
//         if (arr1[i] == arr2[j]) {
//             intersection.insert(arr1[i]);
//             i++;
//             j++;
//         }
//         else if (arr1[i] < arr2[j]) {
//             i++;
//         }
//         else {
//             j++;
//         }
//     }

//     cout << "Intersection Array is: ";
//     for (auto it : intersection) {
//         cout << it << " ";
//     }
// }

// int main()
// {
//     int a[7] = { 1, 4, 3, 4, 2,5,5 };
//     int b[6] = { 1, 2, 3, 4, 5,3 };

//     int n1 = sizeof(a) / sizeof(a[0]);
//     int n2 = sizeof(b) / sizeof(b[0]);

//     findArrayIntersection(a, n1, b, n2);

//     return 0;
// }


#include <iostream>
#include <unordered_set>
using namespace std;

void findArrayIntersection(int* arr1, int n, int* arr2, int m)
{
    unordered_set<int> intersection;
    
    // Create a hash set for the first array
    unordered_set<int> set1;
    for (int i = 0; i < n; i++) {
        set1.insert(arr1[i]);
    }
    
    // Iterate over the second array and find the intersection
    cout << "Intersection Array is: ";
    for (int i = 0; i < m; i++) {
        if (set1.count(arr2[i])) {
            cout << arr2[i] << " ";
        }
    }
}

int main()
{
    int a[11] = { 1, 4, 3, 4, 2,6,3,4,6,2 ,5};
    int b[10] = { 1, 2, 3, 4, 5 ,6,8,7,9,7,};

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    findArrayIntersection(a, n1, b, n2);

    return 0;
}
