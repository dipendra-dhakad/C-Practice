#include <iostream>
using namespace std;

int firstOcc(int arr[], int n , int key){
    int s = 0;
    int e =n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid ;
            e = mid -1;  // left occurence logic 
        }

        else if (key > arr [mid])
        {
            s = mid + 1 ;
        }
        else{
            e = mid -1;
        }
        
        mid  = s + (e - s )/2;
    }
    return ans ;
}

int lastOcc(int arr[], int n , int key){
    int s = 0;
    int e =n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid ;
            s = mid + 1;  // right occurence logic 
        }

        else if ( key  > arr [mid])
        {
            s = mid + 1 ;
        }
        else {
            e = mid -1;
        }
        
        mid  = s + (e - s )/2;
    }
    return ans ;
}
int main(){
    int arr[5] = {1,2,3,3,5} ;

    cout<< " The 1 st occurence of 3 at index " << firstOcc(arr,5,3) << endl;

    cout<< " The last  occurence of 3 at index " << lastOcc(arr,5,3) << endl;
    return 0 ;
}