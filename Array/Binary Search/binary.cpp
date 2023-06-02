#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }

        if (key > arr[mid] )
        {
            start=mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
        
    }
    return -1;
    
}
int main(){
    int even[8] ={2,3,4,5,6,7,8,9} ;
    int odd[5] ={3,8,11,16,22};

    int evenINdex = binarySearch(even , 8,6);
    cout<< "Index of 6 is "<<evenINdex <<endl;

    int oddINdex = binarySearch(odd ,5,11);
    cout<< "Index of 11 is "<<oddINdex <<endl;
    return 0 ;
}