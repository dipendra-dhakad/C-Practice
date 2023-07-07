#include <iostream>
using namespace std;

int smallest(int arr[],int n){
    int smallest =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]< smallest)
        {
            smallest = arr[i];
        }
        
    }
    return smallest;
}
int largest(int arr[],int n){
    int largest =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]> largest)
        {
            largest = arr[i];
        }
        
    }
    return largest;
}
int main(){
    int  arr[13] ={5,3,6,2,1,7,0,10 ,34,2,4,6,7} ;
    int n=13;
    cout<<"smallest element is " <<smallest(arr,n)<<endl;
   cout << "largest element is " << largest(arr,n);
    return 0 ;
}