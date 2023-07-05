#include <iostream>
#include <set>
using namespace std;

void sortedArray(int a[], int b[], int n1, int n2) {
    set<int> st;
    for (int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }

    for (auto it : st) {
        cout << it << " ";
    }
}

int main() {
    int a[5] = {1, 4, 3, 4, 2};
    int b[5] = {1, 2, 3, 4, 5};

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    
    cout<<"Sorted Array is ";
    
    sortedArray(a, b, n1, n2);

    return 0;
}
