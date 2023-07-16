#include <iostream>
using namespace std;
 
int search_single_element(int array1[], int s1)
    {
        int result = array1[0];
        for (int i = 1; i < s1; i++)
            result = result ^ array1[i];
 
        return result;
    }


int main()
{
    int array1[] = {3, 1, 5, 1, 5, 7, 9, 7, 9,8,7};
    int se;
 
    int s1 = sizeof(array1) / sizeof(array1[0]);
    
    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    se = search_single_element(array1, s1);
    cout <<"\nSingle element: " << se;
    return 0; 
}
