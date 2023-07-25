#include <bits/stdc++.h>

using namespace std;
int merge(int arr1[] , int m , int arr2[] , int n , int arr3[]){
   int i = 0 ; int j = 0; int k = 0;
   while(i<m and j<n){
       if(arr1[i] < arr2[j]){
           arr3[k] = arr1[i];
           k++;
           i++;
       }
       else{
           arr3[k] = arr2[j];
           k++;
           j++;
       }
   }
   while(i<n){
       arr3[k] = arr1[i];
       k++;
       i++;
   }
   while(j<m){
       arr3[k] = arr2[j];
       k++;
       j++;
   }
   return 0;
}
void print(int arr3[] , int size){
   for(int i = 0 ; i<size ; i++){
       cout << arr3[i] << " ";
   }
}
int main(){
   int arr1[5] = {1,2,3,4,5};
   int arr2[3] = {6,7,8};
   int arr3[8] = {0};
   merge(arr1 , 5 , arr2 , 3 , arr3);
   print(arr3 , 8);
}

