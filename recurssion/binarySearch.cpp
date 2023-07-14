#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;

}

    bool binarySearch(int *arr,int s,int e,int key){
        cout<<endl;

        print(arr,s,e);

        if (s>e)
        {
            return false ;
        }

        int mid= s+(e-s)/2;

        cout<<"value of arr mid is " << arr[mid] <<endl;

        if (arr[mid]==key)
        {
           return true;
        };

        if (arr[mid] < key)
        {
            return binarySearch(arr,mid+1,e,key);
        }

        else
        {
            return binarySearch(arr,s,mid-1,key);
        }   
        
    }
    

int main(){
    int arr [13] ={2,4,6,8,12,14,16,18,20,222,242,344,456} ;
    int size =13;
    int key ;
    cout<<"Enter the element to search ";
    cin>>key;

    cout << "Persent or Not = " <<binarySearch (arr,0,size-1,key)<<endl;
    return 0 ;
}