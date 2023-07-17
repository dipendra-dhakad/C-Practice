#include <iostream>
#include <climits>

using namespace std;

int secondLargest(int a[],int n){
    int largest = a[0];
    int slargest =-1;
    for(int i =0 ;i <n;i++){
        if(a[i]>largest){
            slargest =largest;
            largest = a[i];
        }
        else if(a[i]< largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(int a[],int n){
     int smallest = a[0];
     int ssmallest =INT_MAX;
     for(int i =0; i<n;i++){
         if(a[i]<smallest){
             ssmallest = smallest;
             smallest =a[i];
         }
         else if(a[i] != smallest && a[i] <ssmallest){
             ssmallest = a[i];

         }
     }
     return ssmallest;
}


int main(){
    int a[12] ={3,5,2,6,1,7,8,4,6,5,7,6};
    int n=10;
     
    cout<<"Second largest element is " << secondLargest(a,n)<<endl;
    cout<< "Second smallest element is " <<secondSmallest(a,n);
    


    return 0 ;
}